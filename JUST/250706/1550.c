#include<stdio.h>
#include<string.h>

int main(void){
    char str[] = "Hello";
    char chArr[] = {'H','e','l','l','o'};
    int i;
    int LEN = sizeof(str) / sizeof(str[0]);

    printf("str=%s\n", str);
    printf("chArr=%s\n",chArr);

    for ( i = 0; str[i]!='\0'; i++);

    printf("LEN=%d\n",LEN);
    printf("i=%d\n",i);
    printf("strlen(str)=%d\n", strlen(str));

    return 0;
    
}