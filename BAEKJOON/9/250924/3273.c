#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    int n, x;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", ar[i]);
    }

    qsort(ar, n, sizeof(int), compare);

    scanf("%d", &x);

    return 0;
}
