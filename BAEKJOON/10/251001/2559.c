#include <stdio.h>

int main(void)
{
    int n, k, at[k], MAX = 0;
    scanf("%d %d", &n, &k);

    for (int i = 0; i < k; i++)
    {
        scanf("%d", &at[i]);
        MAX += at[i];
    }

    for (int k = k; k < n; k++)
    {
    }

    return 0;
}