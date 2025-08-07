#include<stdio.h>

int main(void){
    long t;
    int rst,F=2, T=7;
    scanf("%ld", &t);
    if (t == 1){
        rst = 1;
        goto FI;
    }
    for (int i = 2;; i++){
        if (F<=t && t <=T){
            rst = i;
            break;
        }
        F += (i-1) * 6;
        T += i * 6;
    }
    FI :
    printf("%d\n", rst);
    return 0;
}