#include <stdio.h>

int main(void){
    unsigned int ui = 3;
    int i = 5;

    printf("ui - i = %u\n", ui - i);
    printf("ui - i = %d\n", ui - i);
    printf("ui - i == -2 ? %d\n", ui - i == -2);
   
    printf("%u\n", -10);

    return 0;
}