#include <stdio.h>

int main(){
    int a,b;
    scanf("%d",&a);

    for (int k = 1; k <= a; k++)
    {
        b *= k;
    }
    printf("%d\n",b);
    
    return 0;
}