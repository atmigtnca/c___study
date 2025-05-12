#include <stdio.h>

void func1 (void);
void func2 (void);
int age = 17;

int main()
{
    printf("안녕하세요 !!!\n");
    func2();
    func1();
    printf("정수 = %d \n", 500);
    printf("실수 = %f \n", 4.5);
    printf("문자 = %c \n", 'B');
    printf("나이 : %d \n", age);

    return 0;
}

void func1(void)
{
    printf("투바우 입니다. \n");
}

void func2(void)
{
    printf("제 이름은 ");
}

