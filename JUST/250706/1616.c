#include<stdio.h>

#define ROW 4
#define COL 3

int main(void){
    int score[ROW][COL] = {
        {100,100,100},
        { 20, 20, 20},
        { 30, 30, 30},
        { 40, 40, 40}
    };

    int i,j,sum=0;

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%3d ", score[i][j]);
            sum += score[i][j];
        }
        printf("sum=%d\n", sum);
        sum = 0;
    }
    /*
    printf("sum=%d\n\n", sum);

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("score[%d][%d]=%d\n",i,j,score[i][j]);
        }
        
    }
    */
    return 0;
}