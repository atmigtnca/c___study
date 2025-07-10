#include<stdio.h>

int main(void){
    int arr[5] = {50,60,70,80,90};
    int arr2[5] = {0};
    double arr3[5];

    int i;

    for ( i = 0; i < 5; i++)
    {
        arr3[i] = i+1;
    }

    for ( i = 0; i < 5; i++)
    {
        printf("arr3[%d]=%lf\n", i,arr3[i]);
    }

    printf("sizeof(arr3)=%d\n",sizeof(arr3));

    return 0;
    
    
}