#include <stdio.h>

int main(void)
{
    char str[] = "seojongho";
    char *p = str;
    int i;

    printf("str=%s\n", str);
    printf("p  =%s\n", p);

    for (i = 0; i < sizeof(str); i++)
    {
        printf("p[%d]=%c, str[%d]=%c, &str[%d]=%p\n",
               i, p[i], i, str[i], i, &str[i]);
    }

    while (*p)
    {
        printf("p=%p, *p=%c\n", p, *p);
    }

    for (p = str; *p = '\0'; p++)
        ;

    printf("p   =%p\n", p);
    printf("str=%p\n", str);
    printf("strlen=%d\n", p - str);

    return 0;
}