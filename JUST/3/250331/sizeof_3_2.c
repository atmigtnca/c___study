#include <stdio.h>

int main()
{
    char gender;
    int age;
    float weight;
    double height;

    printf("변수의 할당크기 \n");
    printf(" gender:%lu, age:%lu, weight:%lu, height:%lu \n\n", sizeof(gender) , sizeof(age), sizeof(weight), sizeof(height) );

    printf("자료형의 크기 \n");
    printf("char:%lu, inf:%lu, float:%lu, double:%lu \n\n", sizeof(char), sizeof(int), sizeof(float), sizeof(double));

    printf("정수형 상수: %lu, 실수형 상수 : %lu \n", sizeof(10), sizeof(3.14159));

    const float PI = 3.141592;
    printf("파이의 값:%f \n", PI);

    return 0;
}

