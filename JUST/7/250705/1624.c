#include <stdio.h>

int main(void){
    int a = 1000000;
    int b = 2000000;

    long long c = (long long)a*b;

    printf("c=%lld\n", c);

    return 0;
}