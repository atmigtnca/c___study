#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    for (int i = 1; i <= a; i++)
    {
        for (int k = 0; k!=i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
