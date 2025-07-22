#include <stdio.h>

int main(void)
{
    int num ;
    scanf("%d", &num);
    int sum = 0;
    int i;

    for(i = 0; i!=num; ++i)
    {
        sum = sum + i;
    }
    printf("%d",sum+i);
    return 0;
}