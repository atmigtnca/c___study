#include<stdio.h>
int main(void){
    int n, t=0; scanf("%d", &n);
    while (t != n*2-1){
        int p = (n > t ? t : 2*n-t-2);
        int j;
        for (j = 0; j < p; j++)putchar(' ');
        int k = ((n-j)*2)-1;
        for (int g = 0; g < k; g++) putchar('*');
        printf("\n");
        t++;
    }
    return 0;
}