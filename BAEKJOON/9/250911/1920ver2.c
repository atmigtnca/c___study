#include <stdio.h>
#define LN 100001

int main(void)
{
    int n, m, an[LN] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        }
    scanf("%d", &m);

    for (int j = 0; j < m; j++)
    {
        int b, ct = 0;
        scanf("%d", &b);
        if (b >= 0)
        {
            printf("%d\n", (an[+b] == b) ? 1 : 0);
        }
        else
        {
            printf("%d\n", (an[-b] == b) ? 1 : 0);
        }
    }
    return 0;
}