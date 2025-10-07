#include <stdio.h>

struct Score
{
    int kor;
    int mat;
    int eng;
};

int main(void)
{
    struct Score s = {100, 90, 80};
    struct Score *p = NULL;

    p = &s;

    printf("구조체 s의 주소값 : %p\n", s);
    printf("국어 : %d 수학 : %d 영어 : %d\n", s.kor, s.mat, s.eng);
    printf("국어 : %d 수학 : %d 영어 : %d\n", (*p).kor, (*p).mat, (*p).eng);
    printf("국어 : %d 수학 : %d 영어 : %d\n", p->kor, p->mat, p->eng);

    return 0;
}
