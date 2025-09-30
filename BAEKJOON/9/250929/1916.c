#include <stdio.h>

const long long MOD = 998244353;

long long madd(long long a, long long b)
{
    return (a + b) % MOD;
}

int main(void)
{

    int a = 9, b = 10;

    printf("%lld\n", madd(a, b));

    return 0;
}