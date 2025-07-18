#include <stdio.h>

int main(void){
    char gender;
    char regNo[15];
    
    printf("당신의 주민번호를 입력하세요[011231-1111222] : ");
    scanf("%s", regNo);

    gender = regNo[7];

    if (gender == '1' || gender == '3')
    {
        printf("당신은 남자입니다.\n");
    }else if (gender == '2' || gender == '4')
    {
        printf("당신은 여자입니다.\n");
    }else
    {
        printf("유효하지 않은 주민등록번호입니다.\n");
    }
    
    return 0;
}