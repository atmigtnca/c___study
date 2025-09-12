#include <stdio.h>

void change(char **x) // 포인터의 주소를 받음
{
    *x = "ZZZ"; // 포인터가 가리키고 있는 주소를 바꿈
}

int main(void)
{
    char *x = "XXX"; // char 형 포인터 x 가 XXX를 가리킴
    printf("%s\n", x);
    change(&x); // char 형 포인터 x의 주소를 change함수에 전달
    printf("%s\n", x);

    return 0;
}