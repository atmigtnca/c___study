#include<stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    int k = 1;
    while (k != 2*n){
        int t = (n<=k ? n*2 - k : k);
        for (int a = 0; a < t; a++) putchar('*');
        for (int b = 0; b < (2*n)-(2*t); b++) putchar(' ');
        for (int c = 0; c < t; c++) putchar('*');
        printf("\n");
        k++;
    }
    return 0;
}