#include <stdio.h>

typedef struct studentTag
{
    char name[10];
    int age;
    double gpa;
} student;

int main(void)
{
    student a = {"seojongho", 20, 4.5};
    student b = {"seoyejin", 24, 4.5};

    return 0;
}