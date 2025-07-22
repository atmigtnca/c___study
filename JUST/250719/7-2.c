#include<stdio.h>


int main(void){
    int i = 200;
    int* ptr = &i;

    *ptr = *ptr +1;

    printf("i = %d\n", i);
    printf("*ptr = %d\n", *ptr);
    printf("&i = %p\n", &i);
    printf("ptr = %p\n", ptr);

    return 0;
}
