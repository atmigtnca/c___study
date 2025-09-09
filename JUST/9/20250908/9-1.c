#include <stdio.h>

typedef struct student {
    int no;
    char name[10];
    int kor, math, eng;
} Student;  // 구조체를 전역적으로 정의

int main(void) {
    Student s1;
    Student s2 = {2, "JONE", 100, 90, 80};

    s1 = s2;

    s1.no = 1;
    s1.name[0] = 'S';

    return 0;
}