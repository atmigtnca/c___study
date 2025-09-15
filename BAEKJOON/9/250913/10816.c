#include <stdio.h>
#define LE 10000000

int main(void)
{
    int n, m, ct[(2 * LE) + 1] = {0};
    scanf("%d", &n);
    while (n >= 0)
    {
        int i = 0;
        scanf("%d", &i);
        if (i >= 0)
        {
            ct[LE + 1 + i]++;
        }
        else
        {
            ct[-i]++;
        }
        n--;
    }
    scanf("%d", &m);
    while (m >= 0)
    {
        int o = 0;
        scanf("%d", &o);
        if (o >= 0)
        {
            printf("%d ", ct[LE + 1 + o]);
        }
        else
        {
            printf("%d ", ct[-o]);
        }
        m--;
    }

    return 0;
}