#include<stdio.h>

int main(){
    char gender, marride;
    char name[20];
    int salary;

    printf("성별 ? (여성,남성) ");
    gender = getchar();

    while (getchar() != '\n');

    printf("결혼? (기혼. 미혼) ");
    marride =  getchar();

    printf("월급? ");
    scanf("%d%*c", &salary);

    printf("성명? ");
    gets(name);

    printf("\n\n성명: %s, 성별: %c, 기혼: %c, 월급: %d \n", name,gender,marride,salary);

    return 0;
}