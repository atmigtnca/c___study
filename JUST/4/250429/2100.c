#include<stdio.h>

int main(){
    int i = 1;
    int a = 1;

    while (i<100)
    {
        a = 1;
        while (a<=i)
        {
            printf("*");
            a++;
        }
        i++;
        printf("\n\n");
    }
    return 0;
}