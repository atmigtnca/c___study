#include <stdio.h>

int main(void){
    printf("10 == 10.0f ? %d\n", 10==10.0f);
    printf("'0' == 0 ? %d\n", '0'==0);
    printf("'\\0'==0 ? %d\n",'\0'==0);

    return 0;
}