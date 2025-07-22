#include<stdio.h>
#include<string.h>

int main(void){
    char str[] = "abc";

    printf("\"abc\"==\"abc\"?%d\n", "abc"=="abc");

    printf("strcmp(str, \"abc\") ? %d\n", strcmp(str,"abc"));

    return 0;
}