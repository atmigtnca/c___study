#include<stdio.h>

void changeX(char** x){
    *x = "ZZZ";
}

int main(void){
    char* x = "AAA"; //AAA의 주소를 포인터 x에 저장
    printf("%s\n", x);
    changeX(&x);
    printf("%s\n", x);

    return 0;
}