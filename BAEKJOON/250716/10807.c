// Test 를 좀 헤볼게요


#include<stdio.h>

int main(void){
    int a,i=0,p,u=0; //a: 입력받을 수의 개수 p: 빈도수 구할 숫자 u: 빈도수 횟수
    scanf("%d",&a);
    int ban[(a*2)-1];
        for (int i = 0; i < a; i++)
        {
            scanf("%d ",&ban[2*i]);
            ban[2*i-1] = ' ';
        }
    scanf("%d", &p);
    for (int i = 0; i < a; i++)
    {
        u += (p==ban[2*i]?1:0);
    }
    
    printf("%d",u);
}