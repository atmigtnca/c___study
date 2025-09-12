#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int binary_search(int f, int *ar, int min, int max)
{
    int mid = (max - min) / 2;
    if (f > mid)
    {
        for (int i = mid; i < max; i++)
        {
            /* code */
        }
    }
}

int compare(const int *a, const int *b)
{
    return (*a - *b);
}

int main(void)
{
    int n, m, ar[n], min = INT_MAX, max = INT_MIN;

    int *pt = ar;
    scanf("%d", &n);
    for (int a = 0; a < n; a++)
    {
        scanf("%d", pt);
        if (*pt < min)
        {
            min = *pt;
        }
        if (*pt > max)
        {
            max = *pt;
        }
        pt++;
    }
    qsort(pt, n, sizeof(int), compare);

    scanf("%d", &m);
    for (int b = 0; b < m; b++)
    {
        int c;
        scanf("%d", &c);
        printf("%d\n", binary_search(c, pt, min, max) == 1 ? 1 : 0);
    }

    return 0;
}
