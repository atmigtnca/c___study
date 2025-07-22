#include<stdio.h>

int main(void){;
    int i = 0x1B2B3B4B;
    int *pi = &i;
    unsigned addr = (unsigned)pi;

    printf("i = %X\n", i);
    printf("&i = %p\n", &i);
    printf("pi = %p\n", pi);
    printf("*pi = %X\n", *pi);

    return 0;
}