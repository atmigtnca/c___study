#include<stdio.h>
int main(void){
    int n; scanf("%d", &n);
    for (int i = 1; i < 2*n; i++){
        int k = (n >= i ? i : 2*n-i);
        for (int i = 0; i < k; i++)putchar('*');
        printf("\n");
    }
    return 0;
}