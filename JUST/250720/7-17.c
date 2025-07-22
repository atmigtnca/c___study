#include<stdio.h>

int main(void){
    char c = 10;
    int i = 20;

    char* pc = &c;
    int* pi = &i;
    void *vp1, *vp2;

    vp1 = pc;
    vp2 = pi;

    printf("%p\n", vp1);
    printf("%p\n", vp2);
 }