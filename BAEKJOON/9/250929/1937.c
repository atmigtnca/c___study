#include <stdio.h>

const long long MOD = 998244353;

long long madd(long long a, long long b)
{
    return (a + b) % MOD;
}

long long msub(long long a, long long b)
{
    return (a - b + MOD) % MOD;
}

long long mmul(long long a, long long b)
{
    return (a * b) % MOD;
}
