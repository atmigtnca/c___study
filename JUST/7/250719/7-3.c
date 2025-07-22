#include<stdio.h>

int main(void){
    int i = 200;
    int* ptr = &i;

    printf("i = %d\n", i); // i값
    printf("&i = %p\n", &i); //i의 주소값
    printf("*&i = %d\n", *&i); //i값
    puts("");
    printf("ptr = %p\n", ptr); //ptr의 주소값 = i의 주소값
    printf("*ptr = %d\n", *ptr); //i의값
    printf("&*ptr = %p\n", &*ptr); //i의 주소값

    return 0;

}
