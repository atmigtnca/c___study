#include<stdio.h>

int main(void){
    long long a, rsl=1, ind, rst=0;
    char gong[1500] = {'\0'};
    scanf("%lld", &a);

    while(a){
        rsl *= a;
        a--;
    }

    //printf("%lld\n", rsl);
    ///*
    sprintf(gong, "%lld", rsl);

    for (int i = 0;; i++)
    {
        if (gong[i] == '\0')
        {
            ind = i;
            break;
        }
    }
    //printf("%lld\n", ind);
    
    for (int j = ind-1;; j--)
    {
        if (gong[j] == 0 + '0')
        {
            rst++;
        }else
        {
            break;
        }
    }

    printf("%lld\n", rst);
    //*/

    return 0;
}