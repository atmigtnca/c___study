#include<stdio.h>

int main(void){
    
    int sum = 1;

    for (int i = 1; i <= 10; i++)
    {
        sum *= i;
        printf("1부터 %2d까지의 곱: %d\n",i,sum);
    }

    return 0;
}