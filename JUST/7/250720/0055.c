#include<stdio.h>

int main(void){
    int a = 123;
    int *pi = &a;
    int *vp = &pi;
    printf("%d\n", **(int**)vp);

}