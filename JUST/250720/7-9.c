#include<stdio.h>

int main(void){
    const int MAX = 999; //상수 MAX 선언
    int i = 100; //변수 i 선언

    const int* pci; //상수 포인터 pci선언 - 포인터가 가리키는 대상이 상수
    int *ptr;

    const int* const PCI = &MAX; //상수 포인터 상수 PCI 선언 - 대상과 포인터 모두 상수
    int * const PTR = &i; //포인터 상수 PTR 선언 - 포인터가 상수

    printf("MAX=%d\n", MAX); 
    printf("i=%d\n", i); 


    pci = &MAX; //pci가 상수 MAX를 가리킴
    ptr = (int*)&MAX; //ptr이 상수 MAX를 가리킨다. int*로 형변환을 함
//  *pci = 666;
    *ptr = 666; //잘못된코드이다.
    printf("%d\n", *ptr);
    printf("%d\n", MAX);


    pci = &i; //pci가 i를 가리킨다
    ptr = &i; //ptr이 i를 가리킨다
//  *pci = 200;
    *ptr = 200; //*ptr은 i를 가리키고 있기때문에 i=200;으로 봐도무방
    printf("MAX=%d\n", MAX);
    printf("i=%d\n", i);

//  PCI = &i;
//  *PCI = 300;
//  PTR = &i;
    *PTR = 300; //PTR이 i를 가리키고 있기때문에 i=300;
    printf("MAX=%d\n", MAX);
    printf("i=%d\n", i);
    return 0;
}