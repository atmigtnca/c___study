#include<stdio.h>


int main(void){
    int i = 0x1B2B3B4B;
    int *pi = &i;
    char *pc = (char*)pi;
    short *ps = (short*)pi;

    printf("&i=%p\n", &i);
    printf("pi=%p\n", pi);
    printf("pc=%p\n", pc);
    printf("ps=%p\n", ps);

    printf("*pi=%X\n", *pi);
    printf("*pc=%X\n", *pc);
    printf("*ps=%X\n", *ps);
    printf("*(int*)pc=%X\n", *(int*)pc);

    return 0;
}