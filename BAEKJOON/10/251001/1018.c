#include <stdio.h>
#define MA 51

int main(void)
{
    int y, x;
    char chs[MA][MA] = {'\0'};

    int ches[MA][MA] = {0};
    char (*cchs)[MA] = chs;
    int (*pche)[MA] = ches;

    scanf("%d %d", &y, &x);

    for (int i = 0; i < y; i++)
    {
        scanf("%s", chs[i]);
        for (int j = 0; j < x; j++)
        {
            if (*(*(cchs + i) + j) == 87)
            {
                *(*(pche + i) + j) = 0;
            }
            else if (*(*(cchs + i) + j) == 66)
            {
                *(*(pche + i) + j) = 1;
            }
        }
    }

        // for (int i = 0; i < y; i++)
    // {
    //     for (int j = 0; j < x; j++)
    //     {
    //         printf("%d", ches[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}