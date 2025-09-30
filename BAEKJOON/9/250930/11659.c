#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    int ga[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ga[i]);
    }

    for (int i = 0; i < m; i++)
    {
        int l, r, sum = 0;
        scanf("%d %d", &l, &r);
        for (int i = l - 1; i < r; i++)
        {
            sum += ga[i];
        }
        printf("%d\n", sum);
    }

    return 0;
}