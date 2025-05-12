#include <stdio.h>

int main()
{
    char gender;
    int age;
    double height;

    gender = 'man';
    age = 20;
    height = 184.7;

    printf("성별:%c, 나이:%d, 신장:%lf \n",
    gender, age, height);

    return 0;
}