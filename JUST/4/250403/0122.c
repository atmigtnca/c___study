#include <stdio.h>

int main(){
    int day = 3;

    switch (day){
        case 1:
            printf("s\n");
            break;
        case 2:
            printf("m\n");
            break;
        case 3:
            printf("t\n");
            break;
        default:
            printf("잘못된값입니다.\n");
            break;

    }
    return 0;
}

