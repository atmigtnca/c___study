#include<stdio.h>

int main(){
    int score,ff;

   

   
        printf("점수? ");
        scanf("%d",&score);
        if((score>=0)&&(score<=100))
        {
                if(score>=90)
                {
                    printf("A\n");
                    ff=1;
                }
                else if (score >=80)
                {
                    printf("B\n");
                    ff=1;
                }
                else if (score >=70)
                {
                    printf("C\n");
                    ff=1;
                }
                else
                {
                    printf("노력하세요\n");
                    ff=1;
                }
        }
        else
            printf("점수는 0~100점 사이를 입력하세요!!!\n");
    
    
    return 0;
}