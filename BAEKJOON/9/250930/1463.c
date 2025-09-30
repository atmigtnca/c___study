#include <stdio.h>

int min(int a, int b)
{
}

// int f(int x)
// {
//     int ret = cache[x];

//     if (ret != inf)
//     {
//         return ret;
//     }

//     if (x % 2 == 0)
//     {
//         ret = min(ret, f(x / 2) + 1);
//     }

//     if (x % 3 == 0)
//     {
//         ret = min(ret, f(x / 3) + 1);
//     }

//     return ret;
// }

int main(void)
{
    int n;
    scanf("%d", &n);

    int A[];

    for (int i = 1; i < n; i++)
    {
        if (i * 2 <= n)
        {
            A[i * 2] = min(A[i * 2], A[i] + 1);
        }
        if (i * 3 <= n)
        {
            A[i * 3] = min(A[i * 3], A[i] + 1);
        }
        if (i + 1 <= n)
        {
            A[i * 1] = min(A[i + 1], A[i] + 1);
        }
    }

    return 0;
}