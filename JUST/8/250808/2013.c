#include<stdio.h>

typedef struct student //구조체를 전역적으로 정의
{
    int no;
    char name[10];
    int kor, math, eng;
}Student;

int main(void){
    Student s1;
    Student s2 = {2, "JONG", 100, 90, 80};

    s1 = s2;

    s1.no = 1;
    s1.name[0] = 'S';


    printf("%d\n", s1.no);
    printf("%s\n",s1.name);
    printf("%d\n", s1.kor);
    printf("%d\n", s1.math);
    printf("%d\n", s1.eng);
    puts("");
    printf("%d\n", s2.no);
    printf("%s\n", s2.name);
    printf("%d\n", s2.kor);
    printf("%d\n", s2.math);
    printf("%d\n", s2.eng);

    return 0;
}