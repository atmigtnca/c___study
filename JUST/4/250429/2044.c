#include<stdio.h>

int main(){
    int i = 2;
    int p = 1;
    while (i<20)
    {
        while (p<20)
        {
            printf("%d * %d = %d\n",i,p,i*p);
            p ++;
        }
        i ++;
        p=1;
        printf("\n");
    }
    return 0;
}