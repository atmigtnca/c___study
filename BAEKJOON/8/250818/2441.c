#include<stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for (int j = i; j > 0 ; j--)putchar(' ');
        for (int x = n-i; x > 0; x--)putchar('*');
        printf("\n");
    }
    return 0;
}