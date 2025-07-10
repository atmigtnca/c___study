#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    int numArr[10];
    const int LEN = sizeof(numArr) / sizeof(numArr[0]);

    int i,j,k,tmp;

    int chk;

    srand((unsigned)time(NULL));

    for ( i = 0; i < LEN; i++)
    {
        numArr[i] = rand();
        printf("%d", numArr[i]);
    }

    printf("\n");

    for ( i = 0; i < LEN-1; i++)
    {
        chk = 0;
        for ( j = 0; i < LEN-1; j++)
        {
            if (numArr[j]>numArr[j+1])
            {
                tmp = numArr[j];
                numArr[j] = numArr[j+1];
                numArr[j+1] = tmp;

                chk = 1;
            }
            
        }
        if (chk==0) break;
        
        for ( k = 0; i < LEN; k++)
        {
            printf("%d", numArr[k]);
            printf("\n");
        }
        return 0;
        
    }


    
    
}