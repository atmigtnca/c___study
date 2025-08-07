#include<stdio.h>

 void swap(int* px, int* py){ //주소를 받아 직접 주소의 변수를 변경가능
    int tmp = *px;
    *px = *py;
    *py = tmp;
 }

 int main(void){
    int x = 5;
    int y = 3;

    printf("%d %d\n", x, y);
    swap(&x, &y); // swap함수에 x,y의 주소를 전달
    printf("%d %d\n", x, y);

    return 0;
 }