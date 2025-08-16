#include <stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    int tal = (2*n)-1;
    for (int i = 1; i <= tal; i++){
        int g = (i <= n)?(n-i):(i-n);
        int n = tal-(2*g);
        for (int j = 0; j < g; j++)putchar(' ');
        for (int k = 0; k < n; k++)putchar('*');
        printf("\n");
    }
    return 0;
}