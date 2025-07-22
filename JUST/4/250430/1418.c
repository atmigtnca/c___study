#include<stdio.h>
int main(){
    int i,k,j;
    for ( i = 0; i < 10; i+=2)
    {
        if(i>5)
            k = 9-i;
        else
            k = i;

        for (j = 5-k; j >0;)
        {
            printf("*");
            j--;
        }
        printf("\n");
        
    }
    return 0;
}