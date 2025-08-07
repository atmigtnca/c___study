import os
os.environ["TOKENIZERS_PARALLELISM"] = "false"
import re
import pandas as pd
import numpy as np
import torch
from torch.utils.data import TensorDataset, DataLoader
from torch.utils.data import ConcatDataset
from torch.utils.tensorboard import SummaryWriter
from transformers import AutoTokenizer, AutoModelForSequenceClassification
from transformers import get_linear_schedule_with_warmup
from sklearn.metrics import f1_score
from sklearn.model_selection import StratifiedKFold
import matplotlib.pyplot as plt
from nltk.translate.bleu_score import sentence_bleu
from sklearn.metrics import classification_report
from tqdm.auto import tqdm
from torch.cuda.amp import autocast, GradScaler

EPOCHS = 3

ENSEMBLE_MODELS = ["distilbert-base-multilingual-cased", "xlm-roberta-base", "bert-base-multilingual-cased"]

experiment_results = []
best_models = {}  # Map (model_name, batch_size, max_length) to best model paths list
df = pd.read_csv("/kaggle/input/2025-jbnu-ai-competition/train.csv")
texts = df["text"].tolist()
label_list = df["label"].tolist()

# Split off a hold-out validation set (10%)
from sklearn.model_selection import train_test_split
train_texts, holdout_texts, train_labels, holdout_labels = train_test_split(
    texts, label_list, test_size=0.1, random_state=42, stratify=label_list
)
# Update main texts/labels to the training portion
texts = train_texts
label_list = train_labels

def clean_text(text):
    text = text.lower()
    text = re.sub(r"http\S+", "", text)
    text = re.sub(r"@\w+", "", text)
    text = re.sub(r"[^가-힣a-zA-Z0-9\s]", "", text)
    text = re.sub(r"\s+", " ", text).strip()
    return text

texts = [clean_text(t) for t in texts]
orig_len = len(texts)

# Data Augmentation (placeholder back-translation)
def augment_sentences(texts, labels):
    aug_texts, aug_labels = [], []
    for t, l in zip(texts, labels):
        # TODO: replace with real back-translation/paraphrase
        aug = t  # placeholder
        aug_texts.append(aug)
        aug_labels.append(l)
    return aug_texts, aug_labels

aug_texts, aug_labels = augment_sentences(texts, label_list)
# Combine and then filter augmented by BLEU similarity
filtered_texts, filtered_labels = [], []
for orig, aug, l in zip(texts, aug_texts, aug_labels):
    score = sentence_bleu([orig.split()], aug.split())
    if score >= 0.7:
        filtered_texts.append(aug)
        filtered_labels.append(l)
texts = texts + filtered_texts
label_list = label_list + filtered_labels

# Ensure texts and labels have the same length
if len(texts) != len(label_list):
    min_len = min(len(texts), len(label_list))
    texts = texts[:min_len]
    label_list = label_list[:min_len]

# Dynamically determine max_length from 95th percentile of token counts
token_lengths = [len(t.split()) for t in texts]
import numpy as _np
AUTO_MAX_LEN = int(_np.percentile(token_lengths, 95))
print(f"Auto max_length set to {AUTO_MAX_LEN} (95th percentile of token lengths)")

# Experiment batch sizes and sequence lengths (now using AUTO_MAX_LEN)
HYPERPARAMS = [
    (8, AUTO_MAX_LEN, 3e-5, 0.01),   # dynamic max_length
    (16, 64,             2e-5, 0.01),
    (4, 64,              1e-5, 0.01),
    (8, 32,              3e-5, 0.0)
]

model_name = "distilbert-base-multilingual-cased"
tokenizer = AutoTokenizer.from_pretrained(model_name)
device = torch.device("cuda" if torch.cuda.is_available() else "cpu")

writer = SummaryWriter(log_dir="./logs")
output_dir = "./checkpoints"
os.makedirs(output_dir, exist_ok=True)

for batch_size, max_length, lr, wd in HYPERPARAMS:
    best_model_paths = []  # Collect best checkpoint path for each fold
    print(f"Experiment with batch_size={batch_size}, max_length={max_length}, lr={lr}, weight_decay={wd}")
    # Use fresh copies of data for this experiment
    exp_texts = texts.copy()
    exp_labels = label_list.copy()
    # Ensure equal lengths
    if len(exp_texts) != len(exp_labels):
        min_len = min(len(exp_texts), len(exp_labels))
        exp_texts = exp_texts[:min_len]
        exp_labels = exp_labels[:min_len]
    # Determine number of folds based on data size
    n_splits = min(4, len(exp_labels))
    if n_splits < 2:
        n_splits = 2
    skf = StratifiedKFold(n_splits=n_splits, shuffle=True, random_state=42)
    f1_scores = []
    train_losses = [[] for _ in range(skf.n_splits)]
    all_test_texts, all_test_labels, all_test_preds = [], [], []

    for fold_idx, (train_idx, test_idx) in enumerate(skf.split(exp_texts, exp_labels)):
        train_texts = [exp_texts[i] for i in train_idx]
        train_labels = [exp_labels[i] for i in train_idx]
        test_texts = [exp_texts[i] for i in test_idx]
        test_labels = [exp_labels[i] for i in test_idx]

        train_encodings = tokenizer(train_texts, truncation=True, padding=True, max_length=max_length, return_tensors="pt")
        test_encodings = tokenizer(test_texts, truncation=True, padding=True, max_length=max_length, return_tensors="pt")
        train_labels_tensor = torch.tensor(train_labels)
        test_labels_tensor = torch.tensor(test_labels)

        # Initialize or resume model: first fold uses pretrained, others resume from previous fold best
        if fold_idx == 0:
            model = AutoModelForSequenceClassification.from_pretrained(
                model_name, num_labels=2
            )
        else:
            prev_best = best_model_paths[-1]
            model = AutoModelForSequenceClassification.from_pretrained(
                prev_best, num_labels=2
            )
        model.to(device)
        optimizer = torch.optim.AdamW(model.parameters(), lr=lr, weight_decay=wd)

        train_dataset = TensorDataset(
            train_encodings["input_ids"],
            train_encodings["attention_mask"],
            train_labels_tensor
        )
        train_loader = DataLoader(train_dataset, batch_size=batch_size, shuffle=True, num_workers=2, pin_memory=True)

        total_steps = len(train_loader) * EPOCHS
        warmup_steps = int(0.2 * total_steps)
        scheduler = get_linear_schedule_with_warmup(
            optimizer,
            num_warmup_steps=warmup_steps,
            num_training_steps=total_steps
        )
        scaler = GradScaler()

        fold_dir = os.path.join(output_dir, f"fold_{fold_idx}")
        os.makedirs(fold_dir, exist_ok=True)

        best_f1 = -1.0
        best_epoch = 0

        # Prepare batched validation loader for epoch-wise evaluation
        eval_dataset = TensorDataset(
            test_encodings["input_ids"],
            test_encodings["attention_mask"]
        )
        eval_loader = DataLoader(
            eval_dataset,
            batch_size=batch_size,
            num_workers=2,
            pin_memory=True
        )

        # Early stopping setup
        best_val_f1 = 0.0
        no_improve_epochs = 0
        patience = 2

        model.train()
        for epoch in range(EPOCHS):
            epoch_loss = 0.0
            loop = tqdm(train_loader, desc=f"Fold {fold_idx} Epoch {epoch+1}/{EPOCHS}", leave=False)
            for batch in loop:
                input_ids, attention_mask, labels = [x.to(device) for x in batch]
                optimizer.zero_grad()
                with autocast():
                    outputs = model(input_ids=input_ids, attention_mask=attention_mask, labels=labels, return_dict=True)
                    logits = outputs.logits
                    # compute per-sample cross entropy
                    loss_fct = torch.nn.CrossEntropyLoss(reduction='none')
                    per_sample_loss = loss_fct(logits, labels)
                    loss = per_sample_loss.mean()
                scaler.scale(loss).backward()
                torch.nn.utils.clip_grad_norm_(model.parameters(), max_norm=1.0)
                scaler.step(optimizer)
                scaler.update()
                scheduler.step()
                epoch_loss += loss.item()
                loop.set_postfix(loss=f"{loss.item():.4f}")
            # Track hard examples for next epoch
            hard_indices = (per_sample_loss > 1.0).nonzero(as_tuple=True)[0].cpu().tolist()
            if hard_indices:
                hard_input_ids = input_ids[hard_indices].detach().cpu()
                hard_attention_mask = attention_mask[hard_indices].detach().cpu()
                hard_labels = labels[hard_indices].detach().cpu()
                # Append to a cumulative hard example dataset for this epoch
                if epoch == 0:
                    hard_dataset = TensorDataset(hard_input_ids, hard_attention_mask, hard_labels)
                else:
                    hard_dataset = ConcatDataset([hard_dataset, TensorDataset(hard_input_ids, hard_attention_mask, hard_labels)])
            avg_loss = epoch_loss / len(train_loader)
            writer.add_scalar(f"fold_{fold_idx}/train_loss", avg_loss, epoch)
            print(f"Fold {fold_idx} Epoch {epoch+1}/{EPOCHS} 완료, loss={avg_loss:.4f}")
            train_losses[fold_idx].append(avg_loss)

            # After each epoch, augment training loader with hard examples
            if 'hard_dataset' in locals():
                combined_dataset = ConcatDataset([train_dataset, hard_dataset])
                train_loader = DataLoader(combined_dataset, batch_size=batch_size, shuffle=True, num_workers=2, pin_memory=True)
                del hard_dataset

            model.save_pretrained(os.path.join(fold_dir, f"epoch_{epoch+1}"))
            tokenizer.save_pretrained(os.path.join(fold_dir, f"epoch_{epoch+1}"))

            # Evaluate on validation set after this epoch
            model.eval()
            epoch_preds = []
            with torch.no_grad():
                for batch in eval_loader:
                    input_ids, attention_mask = [x.to(device) for x in batch]
                    outputs = model(input_ids=input_ids, attention_mask=attention_mask)
                    batch_preds = torch.argmax(outputs.logits, dim=1).cpu().numpy()
                    epoch_preds.extend(batch_preds)
            epoch_f1 = f1_score(test_labels, np.array(epoch_preds), average='macro')
            writer.add_scalar(f"fold_{fold_idx}/val_f1_epoch", epoch_f1, epoch)
            print(f"Fold {fold_idx} Epoch {epoch+1}/{EPOCHS} Validation F1: {epoch_f1:.4f}")
            if epoch_f1 > best_f1:
                best_f1 = epoch_f1
                best_epoch = epoch + 1
                no_improve_epochs = 0
                best_val_f1 = epoch_f1
            else:
                no_improve_epochs += 1

            # Check for early stopping
            if no_improve_epochs >= patience:
                print(f"Early stopping at Fold {fold_idx} Epoch {epoch+1}/{EPOCHS}, best Val F1={best_val_f1:.4f}")
                break

            model.train()  # back to train mode

        # Load best model for this fold based on validation F1
        best_model_path = os.path.join(fold_dir, f"epoch_{best_epoch}")
        best_model_paths.append(best_model_path)

        # Batched evaluation on validation fold
        eval_dataset = TensorDataset(
            test_encodings["input_ids"],
            test_encodings["attention_mask"]
        )
        eval_loader = DataLoader(
            eval_dataset,
            batch_size=batch_size,
            num_workers=2,
            pin_memory=True
        )

        fold_preds = []
        with torch.no_grad():
            for batch in eval_loader:
                input_ids, attention_mask = [x.to(device) for x in batch]
                outputs = model(input_ids=input_ids, attention_mask=attention_mask)
                batch_preds = torch.argmax(outputs.logits, dim=1).cpu().numpy()
                fold_preds.extend(batch_preds)

        fold_preds = np.array(fold_preds)
        f1 = f1_score(test_labels, fold_preds, average='macro')
        f1_scores.append(f1)
        writer.add_scalar(f"fold_{fold_idx}/val_f1", f1, 0)

        all_test_texts.extend(test_texts)
        all_test_labels.extend(test_labels)
        all_test_preds.extend(fold_preds.tolist())

        del train_encodings, test_encodings, train_loader, train_dataset
        torch.cuda.empty_cache()

    print("Average F1-score (K-Fold):", np.mean(f1_scores))
    avg_f1 = np.mean(f1_scores)
    experiment_results.append((batch_size, max_length, avg_f1))
    print(f"--> Result: batch_size={batch_size}, max_length={max_length}, avg_f1={avg_f1:.4f}")
    best_models[("distilbert-base-multilingual-cased", batch_size, max_length)] = best_model_paths

print("All experiment results:")
for bs, ml, score in experiment_results:
    print(f"batch_size={bs}, max_length={ml} -> avg_f1={score:.4f}")

writer.close()

# Visualization of training loss per epoch for each fold
for i, losses in enumerate(train_losses):
    plt.plot(range(1, EPOCHS+1), losses, label=f'Fold {i}')
plt.title('Training Loss per Epoch')
plt.xlabel('Epoch')
plt.ylabel('Loss')
plt.legend()
plt.show()

# Visualization of validation F1-score per fold
folds = list(range(len(f1_scores)))
plt.bar(folds, f1_scores)
plt.title('Validation F1-score per Fold')
plt.xlabel('Fold')
plt.ylabel('F1-score')
plt.xticks(folds)
plt.show()

# Language detection
def detect_language(text):
    if any('\uac00' <= ch <= '\ud7a3' for ch in text): return 'ko'
    if any('\u3040' <= ch <= '\u30ff' for ch in text): return 'ja'
    if any('\u4e00' <= ch <= '\u9fff' for ch in text): return 'zh'
    return 'en'

# Language-specific performance
lang_labels = {'ko':[], 'en':[], 'zh':[], 'ja':[]}
lang_preds = {'ko':[], 'en':[], 'zh':[], 'ja':[]}
for txt, true, pred in zip(all_test_texts, all_test_labels, all_test_preds):
    lang = detect_language(txt)
    lang_labels[lang].append(true)
    lang_preds[lang].append(pred)

for lang in ['ko','en','zh','ja']:
    report = classification_report(lang_labels[lang], lang_preds[lang], output_dict=True)
    print(f"Language {lang} Macro F1:", report['macro avg']['f1-score'])

# Generate submission file
test_df = pd.read_csv("/kaggle/input/2025-jbnu-ai-competition/test.csv")
test_ids = test_df["id"].tolist()
test_texts = test_df["text"].tolist()
test_texts = [clean_text(t) for t in test_texts]

 # Select best hyperparameter combination based on CV results
best_hyper = max(experiment_results, key=lambda x: x[2])
best_bs, best_ml, best_score = best_hyper
print(f"Using best hyperparameters: batch_size={best_bs}, max_length={best_ml}, avg_f1={best_score:.4f}")
# Retrieve the corresponding best model paths
best_model_paths = best_models[("distilbert-base-multilingual-cased", best_bs, best_ml)]

# Ensemble inference using best model from each fold
test_encodings = tokenizer(test_texts, truncation=True, padding=True, max_length=64, return_tensors="pt")
test_dataset = TensorDataset(test_encodings["input_ids"], test_encodings["attention_mask"])
test_loader = DataLoader(test_dataset, batch_size=8, num_workers=2, pin_memory=True)

import torch
# Accumulate logits from each fold
for i, model_path in enumerate(best_model_paths):
    fold_model = AutoModelForSequenceClassification.from_pretrained(model_path, num_labels=2).to(device)
    fold_model.eval()
    fold_logits = []
    with torch.no_grad():
        for batch in test_loader:
            input_ids, attention_mask = [x.to(device) for x in batch]
            outputs = fold_model(input_ids=input_ids, attention_mask=attention_mask)
            fold_logits.append(outputs.logits.cpu())
    fold_logits = torch.cat(fold_logits, dim=0)
    if i == 0:
        all_logits = fold_logits
    else:
        all_logits += fold_logits

# Average logits and compute final predictions
avg_logits = all_logits / len(best_model_paths)
final_preds = torch.argmax(avg_logits, dim=1).numpy()

submission = pd.DataFrame({"id": test_ids, "label": final_preds})
submission.to_csv("Submissions.csv", index=False)
print("Saved ensemble submission to Submissions.csv")