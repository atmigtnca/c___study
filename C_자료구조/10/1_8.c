#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[100] = "C++";
    char *str2 = " Programming";

    strcat(str1, str2);

    printf("str1 : %s\n", str1);

    return 0;
}