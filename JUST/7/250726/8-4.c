#include<stdio.h>

void changeX(char** px){
    *px = "ZZZ"; //문자열 상수 "ZZZ"의 주소를 포인터 *px에 저장
}

int main(void){
    char* x = "AAA";

    printf("%s\n", x);
    changeX(&x); //포인터 X의 주소를 넘겨준다
    printf("%s\n", x);

    return 0;
}