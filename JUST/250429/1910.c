#include <stdio.h>
const int SEO = 20;

int main(void)
{
    int a = 74;
    int b = 19;

    printf("a^b의 연산 결과는 : %x\n", a^b);
    printf("a&b의 연산 결과는 : %x\n", a&b);

    printf("a의 값 : %x\n", a);
    printf("~a의 값 :  %x\n", ~a);
    printf("a + ~a의 연산 결과는 : %x\n", a + ~a);

    return 0;
}