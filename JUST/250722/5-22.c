#include<stdio.h>

#define LEN 51

int main(void){
    char str[LEN];
    char result[LEN];

    int i;
    int pos = 0;

    printf("%d자 이하의 내용을 입력하세요.>", LEN-1);
    scanf("%s", str);

    for ( i = 0; str[i]; i++)
    {
        if (('0' <= str[i] && str[i] <= '9') || str[i]==',')
        {
            result[pos++] = str[i];
        }
        
    }

    result[pos] = '\0';

    printf("str=%s\n", str);
    printf("result=%s\n", result);

    return 0;
    

}