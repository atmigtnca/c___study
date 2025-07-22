#include<stdio.h>
#define LEN 10

int main(void){
    char str[LEN+1];
    int i;

    printf("길이가 %d이하인 문자열을 입력하세요.>", LEN);
    gets(str);

    printf("str=");
    puts(str);

    for (i = 0; i < LEN+1; i++)
    {
        printf("str[%d]=%c, %d\n", i, str[i], str[i]);
    }
    
    return 0;
}