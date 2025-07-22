#include<stdio.h>

int main(void){
    int score;
    char grade;
    char opt = '0';

    printf("점수를 입력해주세요 : ");
    scanf("%d",&score);
    printf("당신의 점수는 %d입니다. \n", score);

    if (score >= 90)
    {
        grade = 'A';
        if (score >= 98)
        {
            opt = '+';
        }else if (score < 94)
        {
            opt = '-';
        }
    } else if (score >= 80)
    {
        grade = 'B';
        if (score >= 88)
        {
            opt = '+';
        }else if (score < 84)
        {
            opt = '-';
        }
    }

    printf("당신의 학점은 %c%c입니다.\n",grade,opt);
    
    return 0;
}