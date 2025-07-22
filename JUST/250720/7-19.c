#include<stdio.h>

int main(void){
    int arr[1][1] = {100};

    printf("%p\n", arr);
    printf("%p\n", *arr);
    printf("%d\n", *(int*)arr);
    printf("%d\n", **arr);

    return 0;
}