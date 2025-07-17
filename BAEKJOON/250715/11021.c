#include<stdio.h>
int main(void){
    int at=0;
    scanf("%d",&at);
    int strg[at];
    for (int i = 0; i < at; i++)
    {
        int a,b;
        scanf("%d %d",&a, &b);
        strg[i] = a+b;
    }
    for (int i = 0; i < at; i++) printf("Case #%d: %d\n", i+1, strg[i]);
    return 0;   
}