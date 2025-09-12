#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    if (*(int *)a > *(int *)b)
        return 1;
    else if (*(int *)a == *(int *)b)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

int binary_search(int *ar, int size, int tar)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (*(ar + mid) == tar)
        {
            return 1;
        }
        else if (*(ar + mid) < tar)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return 0;
}

int main(void)
{
    int n, m;
    scanf("%d", &n);
    int ar[n];
    int *pt = ar;
    for (int a = 0; a < n; a++)
    {
        scanf("%d", &ar[a]);
    }
    qsort(pt, n, sizeof(int), compare);

    scanf("%d", &m);
    for (int b = 0; b < m; b++)
    {
        int c;
        scanf("%d", &c);
        printf("%d\n", binary_search(pt, n, c));
    }

    return 0;
}