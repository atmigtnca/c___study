#include<stdio.h>

int main(void){
    int score[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int (*ptr)[3] = score;
    int i, j;

    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("score[%d][%d] = %2d, ptr[%d][%d] = %d\n", i,j,score[i][j], i, j, ptr[i][j]);
        }
    }
    
    return 0;

}