#include<stdio.h>
#include<string.h>

int main(void){
    int arr1[] = {2,3,5,7};
    int arr2[sizeof(arr1)/sizeof(arr1[0])];
    int arr3[sizeof(arr1)/sizeof(arr1[0])];

    const int LEN = sizeof(arr1)/sizeof(arr1[0]);
    int i;
    int chk = 0;

    memcpy(arr3, arr1, sizeof(arr1));
    memcpy(arr3, arr1, sizeof(arr1));

    printf




    for (i = 0; i < LEN; i++)
    {
        arr2[i]=arr1[i];
    }
    
    

    for ( i = 0; i < LEN; i++)
    {
        printf("arr1[%d]=%d \t arr2[%d]=%d \t arr3[%d]]%d \n", i,arr1[i], i,arr2[i],i,arr3[i]);
    }

    return 0;
    
}