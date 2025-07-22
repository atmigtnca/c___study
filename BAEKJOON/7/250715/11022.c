#include<stdio.h>
int main(void){
    int at=0;
    scanf("%d",&at);
    for (int i = 0; i < at; i++)
    {
        int a,b;
        scanf("%d %d",&a, &b);
        printf("Case #%d: %d + %d = %d\n", i+1, a, b, a+b);
    }
    return 0;   
}