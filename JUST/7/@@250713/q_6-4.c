#include<stdio.h>

int printGugudan(int dan){
    int i;
    if (2>dan || dan > 9)
    {
        return 0;
    }
    
    for (i = 0; i <= 9; i++)
    {
        printf("%d*%d=%2d\n", dan, i, dan*i);
    }
}