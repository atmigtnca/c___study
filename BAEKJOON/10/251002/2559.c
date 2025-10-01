#include <stdio.h>

int main(void)
{
    int n, k, sum = 0;
    scanf("%d %d", &n, &k);

    int ar[n];

    for (int i = 0; i < k; i++)
    {
        scanf("%d", &ar[i]);
        sum += ar[i];
    }

    int MAX = sum;

    for (int i = k; i < n; i++)
    {
        int p;
        scanf("%d", &p);
        ar[i] = p;
        sum = sum + p - ar[i - 1];

        if (sum > MAX)
        {
            MAX = sum;
            printf("-%d-%d\n", i, MAX);
        }
    }

    printf("%d\n", MAX);

    return 0;
}