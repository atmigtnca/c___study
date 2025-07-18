#include <stdio.h>

int main(void){
    char gender;
    char regNo[15];
    
    printf("당신의 주민번호를 입력하세요[011231-1111222] : ");
    scanf("%s", regNo);

    gender = regNo[7];

    switch (gender)
    {
    case '1':
    case '3':
        printf("당신은 남자입니다.\n");
        break;
    case '2':
    case '4':
        printf("당신은 여자입니다.\n");
    default:
    printf("유효하지 않은 주민등록번호입니다.\n");
    }

    return 0;
}