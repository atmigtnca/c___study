#include<stdio.h>

int main(void){
    int a,b,v, rst1 = 0, day = 1;
    scanf("%d %d %d", &a, &b, &v);

    while(1)
    {
        rst1 += a;
        if (rst1 >= v){
            printf("%d\n", day);
            break;
        }
        rst1 -= b;
        if (rst1 >= v){
            printf("%d\n", day);
            break;
        }
        day++;
    }
    return 0;
}