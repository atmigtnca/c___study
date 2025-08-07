#include<stdio.h>

int main(void){
    int a,b,v, enjo,fi=1, day=0, gog=0;
    scanf("%d %d %d", &a, &b, &v);
    
    enjo = a - b;
    while (fi){
        gog += enjo;
        if (v > gog || v > gog - b)
        {
            day ++;
        }else if (v < gog)
        {
            fi = 0;
        }
    }
    printf("%d\n", day);
    return 0;
}