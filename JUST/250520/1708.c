#include<stdio.h>

int main(){
    int score;

    printf("점수 ? ");
    scanf("%d", &score);

    switch(score / 10){
        case 10:
        case 9 : printf("A 학점\n");
                break;
        case 8 : printf("B 학점\n");
                break;
        case 7 : printf("C 학점\n");
                break;
        case 6 : printf("D 학점\n");
                break;
        default : printf("당신의 점수 %d   \n",score);
                break;
    }

    printf("End. \n");

    return 0;

}