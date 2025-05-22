#include <stdio.h>

void ShowMessage(char); // 함수의 선언 //함수의 선언에는 인수의 타입을 기술

int main(void){

    printf("시작\n");

    ShowMessage("안녕");  //함수의 호출
    ShowMessage("whdgh");
    printf("마무리\n");

    return 0;
}


void ShowMessage(char n){ //함수의 정의
    printf("전달받은 매개변수는 %c 이다!\n",n);
}