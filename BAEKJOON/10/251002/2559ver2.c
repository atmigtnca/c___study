#include <stdio.h>

int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);

    int li[n], MAX = 0;

    for (int i = 0; i < k; i++)
    {
        scanf("%d", &li[i]);
        MAX += li[i];
    }

    for (int j = k; j < n; j++)
    {
        scanf("%d", &li[j]);
    }

    return 0;
}