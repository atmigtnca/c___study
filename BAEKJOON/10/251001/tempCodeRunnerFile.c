#include <stdio.h>
#define LE 1030

int ad(int (*ptr)[LE], int x1, int y1, int x2, int y2)
{
    int rst = *(*(ptr + x2) + y2) - *(*(ptr + x2) + y1 - 1) - *(*(ptr + x1 - 1) + y2) + *(*(ptr + x1 - 1) + y1 - 1);
    return rst;
}

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    int ak[LE][LE] = {0};
    int (*ptr)[LE] = ak;

    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= n; b++)
        {
            int k;
            scanf("%d", &k);
            ak[b][a] = k + ak[b - 1][a] + ak[b][a - 1] - ak[b - 1][a - 1];
        }
    }

    for (int y = 0; y < m; y++)
    {
        int x1, y1, x2, y2, rst;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        printf("%d\n", ad(ak, x1, y1, x2, y2));
    }

    return 0;
}