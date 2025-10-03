#include <stdio.h>

struct Score
{
    int kor;
    int mat;
    int eng;

    struct Score *link1;
    struct sub_Score *link2;
};

struct sub_Score
{
    int soc;
    int sci;
};

int main()
{
    struct Score s1 = {100, 100, 100, NULL, NULL};
    struct Score s2 = {50, 50, 50, NULL, NULL};
    struct Score s3 = {0, 0, 0, NULL, NULL};

    s1.link1 = &s2;
    s2.link2 = &s1;

    return 0;
}