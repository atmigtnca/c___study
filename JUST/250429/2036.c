#include <stdio.h>

int main(){
    int month;

    printf("월을 입력하세요: ");
    scanf("%d", &month);

    switch(month)
    {
        case 12:
        case 1:
        case 2:
            printf("겨울이군요\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("봄이군요\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("여름이군요\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("가을이군요\n");
            break;
        default:
            printf("월을 잘못 입력하였습니다\n");
            break;
    }
    return 0;
}

