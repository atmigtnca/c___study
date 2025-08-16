#include<stdio.h>

int main(void){
    int a,b,v,dif, res ,ptr;
    scanf("%d %d %d", &a, &b, &v);
    dif = a - b;
    res = v % dif;
    ptr = v / dif;

    if (res == 0)
    {
        printf("%d\n", ptr - b );
    }
    else if (a > res)
    {
        printf("%d\n", ptr + 1);
    }
    

    return 0;
}
