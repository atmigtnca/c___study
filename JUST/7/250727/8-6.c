#include<stdio.h>

int sumArr(int arr[], int len);
void printArr(int arr[], int len);
void sMax(int arr[], int len);

int main(void){
    int arr[] = {1,2,3,4,5};
    const int LEN = sizeof(arr) / sizeof(arr[0]);

    int sum = sumArr(arr, LEN);

    printArr(arr, LEN);
    printf("sum=%d\n", sum);
    sMax(arr, LEN);
    return 0;
}

int sumArr(int arr[], int len){
    int sum = 0;
    while (len--)
    {
        sum += *arr;
        arr++;
    }
    return sum;
}

void sMax(int arr[], int len){
    int MAX = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] >= MAX)
        {
            MAX = arr[i];
        }
    }
    printf("max=%d\n", MAX);
}


void printArr(int arr[], int len){
    int i;

    for ( i = 0; i < len; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]);
    }
}
