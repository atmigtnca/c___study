#include<stdio.h>

extern int gv;

void printGv(void){
    printf("printGv = gv=%d\n", gv);
}