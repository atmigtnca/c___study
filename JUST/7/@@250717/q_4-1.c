#include<stdio.h>

int main(void){
    int num;

    printf("숫자를 입력하시요 : ");
    scanf("%d",&num);

    if(num <= 0){
        printf("확인할 수 없습니다.\n");
    } else if (num % 2 ==0)
    {
        printf("짝수\n");
    } else {
        printf("홀수\n");
    }

    return 0;
}
