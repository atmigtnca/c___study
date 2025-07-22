#include<stdio.h>

int main(void){

    int arr1[] = {2,3,5,7};
    
    printf("sizeof(arr1) = %d\n",sizeof(arr1));
    printf("sizeof(arr1[0]) = %d\n",sizeof(arr1[3]));

    printf("%d\n", (sizeof(arr1)/sizeof(arr1[0])));

    return 0;
}

