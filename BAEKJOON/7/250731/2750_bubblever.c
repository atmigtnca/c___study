#include<stdio.h>
void bubble(int arr[], int n);
void printff(int arr[], int n);

int main(void){
    int su, tmp;
    scanf("%d", &su);
    int ju[su];
    for (int i = 0; i < su; i++)scanf("%d", &ju[i]);

    bubble(ju, su);
    printff(ju, su);
    return 0;
}

void bubble(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        int swap = 0;
        for (int j = 0; j < n-1-i; j++){
            if (arr[j] > arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                swap = 1;
            }
        }
        if (!swap)break;
    }
}

void printff(int arr[], int n){
    for (int i = 0; i < n; i++)printf("%d\n", arr[i]);
}