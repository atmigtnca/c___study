#include<stdio.h>

int main(void){
    int i = 100;
    int* pi = &i;
    int** ppi = &pi;
    int* pi2 = (int*)&pi;
}

