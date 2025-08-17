#include<stdio.h>
int main(void){
    int n; scanf("%d", &n);
    int f = n;
    while(f){
        int ct = (2*(f-1))+1;
        for (int i = n-f; i > 0; i--)putchar(' ');
        for (int i = 0; i < ct; i++)putchar('*');
        f--;
        printf("\n");
    }
    return 0;
}