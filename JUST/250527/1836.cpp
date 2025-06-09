#include <stdio.h>

int string_init(struct string* tar,char* s);
int string_compare(struct string *u, struct string *v);
int string_copy(struct string *tar, struct string *s);

struct string{
    char arr[555];
    int (*comp)(struct string*,struct string*)=string_compare;
    int (*copy)(struct string*,struct string*)=string_copy;
    int (*init)(struct string*,char*)=string_init;
};

int string_compare(struct string *u, struct string *v){
    int cnt=0;
    do{
        if(u->arr[cnt] < v->arr[cnt]){
            return 1;
        }
        if(u->arr[cnt] > v->arr[cnt]){
            return -1;
        }

        cnt++;
    }while(u->arr[cnt] || v->arr[cnt]);

    return 0;
}
int string_copy(struct string *tar, struct string *s){
    int cnt=0;
    while(s->arr[cnt]){
        tar->arr[cnt]=s->arr[cnt];
        cnt++;
    }

    return 0;
}

int string_init(struct string* tar,char* s){
    int cnt=0;
    while(s[cnt]){
        tar->arr[cnt]=s[cnt];
        cnt++;
    }
    tar->arr[cnt]=0;

    return 0;
}

int main(int argc, char * argv[]){
    struct string a;
    a.init(&a, (char*)"hello, world!");
    
    struct string b;
    a.copy(&b,&a);
    
    printf("%s\n", b.arr);
    b.init(&b, (char*)"hello, world!");

    printf("%d %s %s", a.comp(&a,&b), a.arr, b.arr);
    return 0;
}