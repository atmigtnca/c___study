#include<stdio.h>
int main(void){
    int n; scanf("%d", &n);
    int f = n, cut = 0;
    while(f){
        int ct = (2*cut)+1;
        for (int i = n-cut-1; i > 0; i--)putchar(' ');
        for (int i = 0; i < ct; i++)putchar('*');
        f--; cut++;
        printf("\n");
    }
    return 0;
}