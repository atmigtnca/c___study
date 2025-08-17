#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m;
    int i,j,k,p;
    scanf("%d",&n);

    for(i = 1;i<=(2*n-1);i++){
        for(j = abs(n-i);j>0;j--)printf(" ");
        if(i>n) for(p=1;p<=4*n-2*i-1;p++)printf("*");
        else for(k = 1;k<=2*i-1;k++)printf("*");
        printf("\n");
    }

    return 0;
}