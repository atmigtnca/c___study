#include<stdio.h>

int main(void){
    int arr[2][3] = {1, 2, 3, 4, 5, 6};
    int (*ptr)[3] = arr;
    
    /*printf("%d\n", **ptr);
    printf("%p\n", ptr+2);
    printf("%p\n", &ptr[1][2]);
    */
}