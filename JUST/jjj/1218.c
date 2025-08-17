#include<stdio.h>

int main(void){
    int *numPTr;
    int num1 = 10;

    numPTr = &num1;

    printf("%p\n", numPTr);
    printf("%p\n", &num1);
    printf("%d\n", *numPTr);


    return 0;
}