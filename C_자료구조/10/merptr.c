#include <stdio.h>

struct Score
{
    int *kor;
    int *mat;
    int *eng;
};

int main(void)
{
    int score1 = 100;
    int score2 = 90;
    int score3 = 80;

    struct Score s;
    s.kor = &score1;
    s.mat = &score2;
    s.eng = &score3;

    printf("국어점수 : %d\n", *s.kor);
    printf("수학점수 : %d\n", *s.mat);
    printf("영어점수 : %d\n\n", *s.eng);
}
