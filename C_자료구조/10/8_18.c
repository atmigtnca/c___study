#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *toUpperCase(char *str)
{
    const int LEN = strlen(str);
    char *put = malloc(sizeof(char) * (LEN + 1));
    if (put == NULL)
    {
        printf("out of memory\n");
        exit(1);
    }

    for (int i = 0; i < LEN; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            put[i] += str[i] - 32;
        }
        else
        {
            put[i] = str[i];
        }
    }
    put[LEN] = '\0';

    return put;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char arr[50];
        scanf("%s", arr);
        printf("%s\n", toUpperCase(arr));
    }

    return 0;
}