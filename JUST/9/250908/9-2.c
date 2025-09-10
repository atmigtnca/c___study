#include <stdio.h>
#include <string.h>

struct date {
    int year, month, day;
};

struct userScore {
    char userID[8];
    int score;
    int rank;
    struct date inputDate;
    struct date changeDate;
};

int main(void) {
    struct userScore s1 = {"myId", 100, 1, {2016, 1, 31}, {2016, 2, 2}};
    struct date d1 = {2016, 3, 3};

    strcpy(s1.userID, "yourID");

    s1.inputDate.year = 1999;
    s1.inputDate.month = 12;
    s1.inputDate.day = 31;

    s1.changeDate = d1;

    printf("userId=%s\n", s1.userID);
    printf("score=%d\n", s1.score);
    printf("rank=%d\n", s1.rank);
    printf("inputDate->year:%d month:%d day:%d\n",
           s1.inputDate.year,
           s1.inputDate.month,
           s1.inputDate.day);
    printf("changeDate->year:%d month:%d day:%d\n",
           s1.changeDate.year,
           s1.changeDate.month,
           s1.changeDate.day);
    return 0;
}