#include<stdio.h>
int main(void){
    int in=0, count;
    scanf("%d",&in);
    count = in/4;
    for (int i = 0; i < count; i++)printf("long ");
    printf("int\n");
}