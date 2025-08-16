#include<stdio.h>

int main(void){
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n == 1000){printf("%d\n", 144); return 0;}
    if (n < 100){printf("%d\n", n);return 0;}
    int las = 100, cut = 99;
    while (las != n+1){
        int se = las / 100, du = (las % 100) / 10, ch = las % 10;
        if ((2*du)==(se+ch))cut++;
        las++;
    }
    printf("%d\n", cut);
    return 0;
}