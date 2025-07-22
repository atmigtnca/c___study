#include<stdio.h>

int main(){
    char ch;

    ch = 'Z';

    do{
        printf("%c ", ch--);

    } while(ch>='A');
    printf("\n");

    return 0;
}