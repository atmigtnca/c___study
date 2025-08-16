#include<stdio.h>

typedef struct student
{
    int no;
    char name[10];
    int kor, math, eng;
}Student;

int main(void){
    Student stuArr[] = {
        {1, "KIM kim", 10, 47, 88,},
        {2, "LEE lee", 92, 97, 96,},
        {3, "CHOI choi", 82, 83, 89,},
        {4, "PARK park", 35, 85, 79,}
    };

    const int LEN = sizeof(stuArr) / sizeof(stuArr[0]);
    int total, i;
    float average;
/*
    printf("%zu\n", sizeof(stuArr));
    printf("%zu\n", sizeof(stuArr[0]));
    printf("%zu\n", sizeof(Student));
    printf("%zu\n", sizeof(struct student));
    printf("%d\n", LEN);
*/
    printf("\n번호 이름        국어 수학 영어 총점 평균\n");
    printf("==========================================\n");

    for ( i = 0; i < LEN; i++)
    {
        total = stuArr[i].kor + stuArr[i].math + stuArr[i].eng;
        average = total / (float)3;

        printf("%4d %-10s %4d %4d %4d %4d %6.2f\n", stuArr[i].no, stuArr[i].name, stuArr[i].kor, stuArr[i].math, stuArr[i].eng, total, average);
    }
    
    return 0;
}