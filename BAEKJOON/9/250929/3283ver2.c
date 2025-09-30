#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    int n, x, cut = 0;
    scanf("%d", &n);
    int sal[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &sal[i]);
    }
    qsort(sal, n, sizeof(int), compare);

    scanf("%d", &x);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            int rst = sal[i] + sal[j];
            if (rst == x)
            {
                cut++;
            }
            else if (rst > x)
            {
                break;
            }
        }
    }

    printf("%d\n", cut);

    return 0;
}