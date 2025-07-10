#include <stdio.h>

int main(void){
    char a = 'a';
    char d = 'd';
    char x = 'X' + 32;

    char zero = '0';
    char two = '2';

    printf("'%c' - '%c' = %d\n",d,a,d-a);
    printf("'%c' - '%c' = %d\n",two,zero,two - zero);
    printf("%c\n",x);

    return 0;
}