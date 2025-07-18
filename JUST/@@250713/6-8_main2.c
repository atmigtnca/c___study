#include <stdio.h>
#include "sub.h"

int main(void){
    int dan = getUserInput();

    if(2<=dan && dan<=9)
        printGugudan(dan);
    else
        printGugudanAll();


    return 0;
}