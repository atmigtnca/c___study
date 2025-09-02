#include<stdio.h>

int main(void){
    int n, k = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int a = 0; a < i; a++)
        {
            putchar('*');
        }
        for (int b = 0; b < (2*n)-(2*i); b++)
        {
            putchar(' ');
        }
        for (int c = 0; c < i; c++)
        {
            putchar('*');
        }
        printf("\n");
    }

    for (int i = n-1; i > 0; i--)
    {
        for (int a = 0; a < i; a++)
        {
            putchar('*');
        }
        for (int b = 0; b < (2*n)-(2*i); b++)
        {
            putchar(' ');
        }
        for (int c = 0; c < i; c++)
        {
            putchar('*');
        }
        printf("\n");
    }
    
    

    return 0;
}