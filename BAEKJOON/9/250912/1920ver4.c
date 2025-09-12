#include <stdio.h>
#include <stdlib.h>

int binary_search(int f, int *ar, int len, int sta)
{
    int LE, ct = 1;
    while (ct == 1)
    {
        LE = sta + (len - sta) / 2;
        if (*(ar + LE) == f)
        {
            ct = 0;
        }
        else if (*(ar + LE) > f)
        {
            sta = len - LE;
            len = LE;
        }
        else if (*(ar + LE) < f)
        {
            sta = LE;
        }
        if (len == sta)
        {
            break;
        }
    }
    return (ct == 0) ? 1 : 0;
}

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    int n, m;
    scanf("%d", &n);
    int ar[n];
    int *pt = ar;
    for (int a = 0; a < n; a++)
    {
        scanf("%d", pt);
        pt++;
    }
    pt = ar;
    qsort(pt, n, sizeof(int), compare);

    scanf("%d", &m);
    for (int b = 0; b < m; b++)
    {
        int c;
        scanf("%d", &c);
        printf("%d\n", binary_search(c, pt, n, 0) == 1 ? 1 : 0);
    }

    return 0;
}