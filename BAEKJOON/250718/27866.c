#include<stdio.h>

int main(void){
    int a;
    char arr[1000];
    scanf("%s", arr);
    scanf("%d", &a);
    printf("%c\n", arr[a-1]);
}