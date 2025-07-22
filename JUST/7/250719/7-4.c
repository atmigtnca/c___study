#include<stdio.h>

int main(void){
    char ch;
    char* pch = &ch;

    printf("sizeof(pch) = %d\n", sizeof(pch));
    printf("sizeof(*pch) = %d\n", sizeof(*pch));

    return 0;

}