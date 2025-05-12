#include <stdio.h>

int main(){
    int score = 85, ser_score = 90;

    printf("score: %d, ser_score: %d \n\n", score, ser_score);
    printf("score >= 90 : %d \n", score >=90);
    printf("score < 90 : %d \n", score < 90);

    printf("score == 90 : %d \n", score==90);
    printf("score != 90 : %d \n", score != 90);

    printf("score >= 90 && ser_score >= 90 : %d \n", score>=90 && ser_score>=90);
    printf("score >= 90 || ser_score >= 90 : %d \n", score>=90 || ser_score>=90);

    printf("!(score != 90) : %d \n", !(score != 90));

    char gender;

    gender = getchar();
    printf("성별 : %s \n", gender==1 ? "남자":"여자");

    return 0;
}