#include<stdio.h>

int main(void){
    char k;

    printf("하나의 문자를 입력하세요 : ");
    scanf("%c",&k);

    if ('A'<=k && k <= 'Z')
    {
        printf("대문자입니다.\n");

    }else if ('a' <= k && k <= 'z')
    {
        printf("소문자입니다.\n");

    }else if ('0' <= k && k <= '9')
    {
        printf("숫자입니다.\n");
    }else
    {
        printf("숫자나 영문자가 아닙니다.\n");
    }

    return 0;
}