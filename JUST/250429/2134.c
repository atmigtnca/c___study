#include<stdio.h>
int main(){
    int input1, input2,i,sum;

    for(;;)
    {
        sum = 0;
        printf("두 수를 입력하시오: ");
        scanf("%d %d",&input1,&input2);

        if(input1<input2)
        {
            for(i=input1;i<=input2;i++)
            {
                sum +=i;
            }
            printf("존재하는 두 수 사이의 합: %d\n", sum);

        }
        else
        {
            printf("두 번째 입력 수가 더 작습니다. \n");
            continue;
        }
    }
    return 0;
}