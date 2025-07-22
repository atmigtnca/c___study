#include<stdio.h>

int main(void){
    int au=0;
    for (int i = 0; i < 5; i++)
    {
        int a=0;
        scanf("%d ", &a);
        au += a*a;
    }
    printf("%d\n", au%10);

}