#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    int ball[9]; //9개의 정수값을 저장하기 위한 배열 선언
    const int LEN = sizeof(ball) / sizeof(ball[0]); //sizeof(ball) = 36 sizeof(ball[0]) = 4
  //const int LEN = 9
    int i,n,tmp; 

    srand((unsigned)time(NULL)); //현재 시각을 seed로 사용해 난수 생성기를 초기화

    for ( i = 0; i < LEN; i++)
    {
        ball[i] = i+1;
    }

    for ( i = 0; i < LEN; i++)
    {
        n = rand() % LEN;
        printf("%d----%d\n",rand(),n);
        tmp = ball[i];
        ball[i] = ball[n];
        ball[n] = tmp;
    }

    for ( i = 0; i < 3; i++)
    {
        printf("%d\n",ball[i]);
    }
    return 0;

}

