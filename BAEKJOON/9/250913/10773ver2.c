#include <stdio.h>

int main(void)
{
    int k, ct = 0, ad = 0, mi = 0;
    scanf("%d", &k);
    int ar[k];
    for (int i = 0; i < k; i++)
    {
        int ze;
        scanf("%d", &ze);
        ad += ze;
        if (ze == 0)
        {
            --ct;
            mi += ar[ct];
        }
        else
        {
            ar[ct] = ze;
            ct++;
        }
    }

    printf("%d\n", ad - mi);

    return 0;
}