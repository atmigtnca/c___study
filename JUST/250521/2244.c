#include <stdio.h>

int Show(int, int);

int main(void){
    printf("시작\n");

    int res;

    res = Show(1,2);
    printf("1과 2의 합은 %d 입니다.\n",res);

    res = Show(111,123);
    printf("111와 123의 합은 %d 입니다.\n",res);

    printf("끝\n");

    return 0;
}

int Show(int n1, int n2){
    int sum = n1 + n2;
    return sum;
}
