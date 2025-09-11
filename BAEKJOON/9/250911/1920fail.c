#include <stdio.h>
#define LN 100001

int main(void)
{
    int n, m;
    long long an[LN] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &an[i]);
    }
    scanf("%d", &m);
    for (int j = 0; j < m; j++)
    {
        int b;
        scanf("%d", &b);
        for (int i = 0; i < n; i++)
        {
            if (an[i] == b)
            {
                printf("1\n");
            }
        }
    }
    return 0;
}