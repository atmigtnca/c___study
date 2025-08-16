#include<stdio.h>

typedef struct frst
{
    int x;
    int y;
}first;


int main(void){
    first ext = {1, 2};

    printf("%d %d\n", ext.x, ext.y);

    return 0;
}