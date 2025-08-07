#include<stdio.h>

long long hyo(long long a, long long b){
    long long rst;
    rst = (a+b)*(a-b);

    return rst;
}

int main(void){
    long long a,b;
    scanf("%lld %lld", &a, &b);
    if (a <= 1000 && b <= 1000)
    {
        printf("%lld\n", hyo(a,b));
    }
    return 0;
}

