#include <stdio.h>

int main(void)
{
    int y, x;
    char chs[51][51] = {'\0'};
    int ches[51][51] = {0};

    scanf("%d %d", &y, &x);

    for (int i = 0; i < y; i++)
    {
        scanf("%s", chs[i]);
        for (int j = 0; j < x; j++)
        {
            if (chs[i][j] == 87)
            {
                ches[i][j] = 0;
            }
            else if (chs[i][j] == 66)
            {
                ches[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%d", ches[i][j]);
        }
        printf("\n");
    }

    return 0;
}