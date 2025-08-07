#include<stdio.h>

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        int swapped = 0; // 이번 반복에서 서로 바꾸는 과정이 있었는지 확인

        for (int j = 0; j < n-i-1; j++){ //이미 정렬된 맨 뒤 부분은 건드릴 필요가 없다
            if (arr[j] > arr[j+1]){
                // 서로 바꾸기(swap)
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                swapped = 1; // 스왑 발생함
            }
        }
        if(!swapped) break; //swap = 0이면 정렬 완료
    }
}

void printff(int arr[], int n){
    for (int i = 0; i < n; i++)printf("%d\n", arr[i]);
}

int main(void){
    int arr[5] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printff(arr, n);
    return 0;
}