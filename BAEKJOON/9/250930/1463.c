#include <stdio.h>

int min(int a, int b)
{
}

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