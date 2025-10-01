#include <stdio.h>

int rop(int MAX, int *adn, int n, int i, int aft, int k)
{
    scanf("%d", adn + i);
    int su = aft + *(adn + i) - *(adn + i - k + 1);
    printf("su=%d i=%d\n", su, i);
    if (su > MAX)
    {
        MAX = su;
    }
    i++;
    if (i == n)
    {
        return MAX;
    }
    else
    {
        return rop(MAX, adn, n, i, su, k);
    }
}

int main(void)
{
    int n, k, sum = 0, i;
    scanf("%d %d", &n, &k);
    int cut = n - k + 1, nli[n];

    for (i = 0; i < k; i++)
    {
        scanf("%d", &nli[i]);
        sum += nli[i];
    }

    int rst = rop(sum, nli, n, i, nli[1], k);

    printf("%d\n", rst);

    return 0;
}