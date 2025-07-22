#include<stdio.h>

int main(void){
    int arr[] = {0, 1, 2, 3, 4};
    int* ptr = &arr[0];
    const int LEN = sizeof(arr) / sizeof(arr[0]);
    int i;

    for ( i = 0; i < LEN; i++)
    {
        printf("ptr++=%p, &arr[%d]=%p\n", ptr++, i, &arr[i]);
    }
    puts("");

    ptr = &arr[0];

    for ( i = 0; i < LEN; i++)
    {
        printf("*ptr++=%d, arr[%d]=%d\n", *ptr++, i, arr[i]);
    }
    
    return 0;
}
