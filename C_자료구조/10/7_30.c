#include <stdio.h>
#include <string.h>

int main(void)
{
    char *pArr[] = {"abcd", "123", "ABC"};
    char *tmp;
    const int LEN = sizeof(pArr) / sizeof(pArr[0]);
    int i, j;

    for (i = 0; i < LEN; i++)
    {
        printf("pArr[%d]=%s\n", i, pArr[i]);
    }

    for (i = 0; i < LEN; i++)
    {
        for (j = 0; j < strlen(pArr[i]); j++)
        {
            printf("pArr[%d][%d]=%c, %d\n", i, j, pArr[i][j], pArr[i][j]);
        }
    }

    tmp = pArr[0];
    pArr[0] = pArr[1];
    pArr[1] = tmp;

    pArr[2] = "ZZZ";

    for (i = 0; i < LEN; i++)
    {
        printf("pArr[%d]=%s\n", i, pArr[i]);
    }

    return 0;
}