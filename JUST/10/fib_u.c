#include <stdio.h>

int fib(int x)
{
    if (x <= 2)
    {
        return 1;
    }
    return fib(x - 1) + fib(x - 2);
}

int main(void)
{
    printf("%d\n", fib(10));

    return 0;
}