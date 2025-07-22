#include<stdio.h>

int main(void){
    int i;
    int arr[10] = {0};
    const int LEN = sizeof(arr) / sizeof(arr[0]);

    printf("sizeof(arr)=%d\n", sizeof(arr));
    printf("sizeof(arr[0])=%d\n",sizeof(arr[0]));
    printf("LEN=%d\n", LEN);

    for (i = 0; i < LEN; i++)
    {
        printf("arr[%d]=%d\n", i,arr[i]);
    }
    
    return 0;
}