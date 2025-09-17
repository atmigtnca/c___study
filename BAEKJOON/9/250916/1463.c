#include <stdio.h>

int samDi(int x);
int iiDi(int x);
int ilMi(int x);

// 목표는 1이다.
int main(void)
{
    int n;
    scanf("%d", &n);
    return 0;
}

int samDi(int x)
{
    x /= 3;
    return x;
}

int iiDi(int x)
{
    x /= 2;
    return x;
}

int ilMi(int x)
{
    x -= 1;
    return x;
}