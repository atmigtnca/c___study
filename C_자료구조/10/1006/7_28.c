#include <stdio.h>
#include <string.h>

int main(void)
{
    char chArr[10];
    char *ps = "ABC";
    int len = strlen(ps);
    int i = 0;

    for (i = 0; i <= len; i++)
    {
        chArr[i] = *(ps + i);
    }

    printf("chArr=%s\n", chArr);

    return 0;
}