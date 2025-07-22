#include<stdio.h>
#define SIZE 10

int main(void){
    char board[SIZE][SIZE] = {0};
    char shipBoard[SIZE-1][SIZE-1] = {
        {0, 0, 0, 0, 0, 0, 1, 0, 0},
        {1, 1, 1, 1, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {1, 1, 0, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 1, 1, 0},
    };
    int i, j;
    int x, y;

    for (i = 0; i < SIZE; i++)
    {
        board[0][i] = board[i][0] = i+'0';
    }

    while (1)
    {
        printf("좌표를 입력하세요. (종료는 0 0)>");
        scanf("%d %d", &x, &y);

        if (x==0 || y==0)
        {
            break;
        }else if (x < 0 || x >= SIZE || y < 0 || y >= SIZE)
        {
            printf("잘못된 입력입니다. 다시 입력해주세요.\n");
            continue;
        }

        board[x][y] = shipBoard[x-1][y-1] ? 'O' : 'X';

        for ( i = 0; i < SIZE; i++)
        {
            for ( j = 0; j < SIZE; j++)
            {
                printf("%c", board[i][j]);
            }
            puts("");
        }
        puts("");
    }

    return 0;
}