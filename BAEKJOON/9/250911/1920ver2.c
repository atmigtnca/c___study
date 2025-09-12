#include <stdio.h>
#define SA 2147483647

int main(void)
{
    int n, m, min = SA, max = -SA - 1;
    scanf("%d", &n);
    int an[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &an[i]);
        if (an[i] > max)
        {
            max = an[i];
        }
        if (an[i] < min)
        {
            min = an[i];
        }
    }

    scanf("%d", &m);

    for (int j = 0; j < m; j++)
    {
        int b, rst = 0;
        scanf("%d", &b);
        int R = max - b;
        int L = b - min;
        if (R > L)
        {

            for (int k = 0; k < n; k++)
            {
                if (an[k] == b)
                {
                    rst = 1;
                    break;
                }
            }
        }
        else
        {
            for (int k = n - 1; k >= 0; k--)
            {
                if (an[k] == b)
                {
                    rst = 1;
                    break;
                }
            }
        }

        printf("%d\n", (rst == 1) ? 1 : 0);
    }

    return 0;
}