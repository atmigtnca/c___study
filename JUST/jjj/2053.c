#include<stdio.h>
#include<string.h>

struct date
{
    int year, mon, day;
};

struct userScore
{
    char userId[8];
    int score;
    int rank;
    struct date inputDate;
    struct date changeDate;
};

int main(void){
    struct userScore s1 = {"myId", 100, 1, {2016,1,31}, {2026, 2,2}};
    struct date d1 = {2026, 3, 3};

    strcpy(s1.userId, "yourId");

    s1.inputDate.year = 1999;
    s1.inputDate.mon = 1;
    s1.inputDate.day = 12;

    s1.changeDate = d1;

    printf("%s\n", s1.userId);
    printf("%d\n", s1.score);
    printf("%d\n", s1.rank);
    printf("%d\n", s1.inputDate.year);
    printf("%d\n", s1.inputDate.mon);
    printf("%d\n", s1.inputDate.day);
    printf("%d\n", s1.changeDate.year);
    printf("%d\n", s1.changeDate.mon);
    printf("%d\n", s1.changeDate.day);

    return 0;
}