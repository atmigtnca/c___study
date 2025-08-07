#include<stdio.h>

void swapStr(char** p1, char** p2){
    char* tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}


int main(void){
    char* str1 = "ABC";
    char* str2 = "123";

    swapStr(&str1, &str2);

    printf("%s %s\n", str1, str2);

    return 0;
}
