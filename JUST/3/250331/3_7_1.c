# include <stdio.h>
# include <limits.h>
# include <float.h>

int main()
{
    long int tmp;
    short int n1 = 0;
    unsigned short int n2 = 0;

    tmp = 32768;
    if(tmp < SHRT_MIN && tmp>SHRT_MAX)
        printf("short int 범위 오류!!! \n");
    else
        n1 = tmp;

    tmp = 32768;
    
    if(tmp < 0 && tmp>USHRT_MAX)
        printf("unsigned short int 범위 오류!!! \n");
    else
        n2 = tmp;

    printf("short int n1: %d \n", n1);
    printf("unsigned short int n2: %d \n", n2);

    return 0;
}

