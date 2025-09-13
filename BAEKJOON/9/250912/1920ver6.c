#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    int x = *(const int*)a, y = *(const int*)b;
    return x<y ? -1 : x>y;
}
int bs(int *a, int n, int t)
{
    int l = 0, h = n - 1;
    while (l <= h)
    {
        int m = (l + h) / 2;
        if (a[m] == t)
            return 1;
        if (a[m] < t)
            l = m + 1;
        else
            h = m - 1;
    }
    return 0;
}
int main()
{
    int n, m, x;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", a + i);
    qsort(a, n, sizeof *a, cmp);
    scanf("%d", &m);
    while (m--)
    {
        scanf("%d", &x);
        printf("%d\n", bs(a, n, x));
    }
}