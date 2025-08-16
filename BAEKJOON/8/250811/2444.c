#include<stdio.h>

int main(void){
    int a;
    scanf("%d", &a);

    for (int i = a, k = a + 1 ; i > 0; i--, k++){
        for (int g = 1 ;g < i; g++)printf(" ");
        for (int n = 0; n < k-i; n++)printf("*");
        printf("\n");
    }

    for (int i = 1, k = a*2-2 ; i < a; i++, k--){
        for (int g = 0 ;g < i; g++)printf(" ");
        for (int n = 0; n < k-i; n++)printf("*");
        printf("\n");
    }

    return 0;
}
