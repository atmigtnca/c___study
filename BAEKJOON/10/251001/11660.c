#include <stdio.h>
#define LE 1025

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    int ad[LE][LE] = {0};
    int (*ptr)[LE] = ad;

    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= n; b++)
        {
            int k;
            scanf("%d", &k);
            *(*(ptr + b) + a) = k + *(*(ptr + b - 1) + a) + *(*(ptr + b) + a - 1) - *(*(ptr + b - 1) + a - 1);
        }
    }

    for (int y = 0; y < m; y++)
    {
        int x1, y1, x2, y2, rst;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        rst = *(*(ptr + x2) + y2) - *(*(ptr + x2) + y1 - 1) - *(*(ptr + x1 - 1) + y2) + *(*(ptr + x1 - 1) + y1 - 1);
        printf("%d\n", rst);
    }

    return 0;
}