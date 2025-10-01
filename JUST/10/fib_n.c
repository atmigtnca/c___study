#include <stdio.h>

int data[100] = {0};

int fib(int x)
{
    if (x <= 2)
    {
        return 1;
    }
    if (data[x] != 0) // 이미 계산을 해서 값을 가지고 있다.
    {
        return data[x];
    }
    else
    {
        // 0이라는 것은 아직 계산이 된적이 없다는 것.
        // 계산을 하고 저장해준다.
        // 그리고 값을 반환한다.
        data[x] = fib(x - 1) + fib(x - 2);
        return data[x];
    }
}

int main(void)
{
    printf("%d\n", fib(30));
    return 0;
}