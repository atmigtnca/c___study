/*
문제
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

입력
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

출력
첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
*/

#include<stdio.h>
int main(){
    int scan1,a,b;
    
    printf("숫자를 입력하세요: ");
    scanf("%d",&scan1);

    for (a = 0; a < scan1; a++)
    {
        for (b = 0; b < a; b++)
        {
            printf("*");

        }
        
        printf("\n");
    }
    



    return 0;
}