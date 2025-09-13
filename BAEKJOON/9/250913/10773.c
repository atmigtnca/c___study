#include <stdio.h>

int main(void)
{
    int n, k, la, all = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &k);
        if (k == 0)
        {
            all -= la;
        }
        else
        {
            all += k;
        }
        la = k;
    }
    printf("%d\n", all);

    return 0;
}
