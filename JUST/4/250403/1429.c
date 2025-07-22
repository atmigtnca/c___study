#include <stdio.h>

int main(){
    int first, second;
    char op;

    printf("두 수를 입력하세요 ?");
    scanf("%d%d", &first,&second);
    printf("first : %d, second : %d \n\n", first,second);

    printf("\n두 수를 입력하세요?");
    scanf("%d,%d", &first,&second);
    printf("first : %d, second : %d \n\n", first, second);
    while (getchar() != '\n');

    printf("\n 전화번호를 입력하세요 ?");
    scanf("%d%c%d", &first,&op, &second);
    printf("first : %d, op : %c, second : %d \n\n", first, op, second);
    
    printf("\n 전화번호를 입력하세요 ?");
    scanf("%d%*c%d", &first, &second);
    printf("first : %d, second : %d \n\n", first,second);

    printf("\n5자리이상 숫자를 입력하세요 ?");
    scanf("%3d%9d", &first,&second);
    printf("first : %d, second : %d \n\n", first,second);

    return 0;
    
}