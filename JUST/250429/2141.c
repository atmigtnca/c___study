#include<stdio.h>
int main(){
    int i,j,input1;

    printf("숫자를 입력하세요: ");
    scanf("%d",&input1);

    for(i=0;i<input1;i++)
    {
        for(j=input1-i;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }



    for (i = 0; i <input1; i++)
    {
        for (j=i; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    

    return 0;
}


