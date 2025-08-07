#include<stdio.h>

int main(void){
    int a, sum = 0, jon[100][100] = {0};
    scanf("%d", &a);
    for (int i = 0; i < a; i++){
        int x, y;
        scanf("%d %d", &y, &x);
        for (int c = x; c < x+10; c++)
            for (int d = y; d < y+10; d++)jon[c][d] = 1; 
    }
    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)sum += jon[i][j];
    printf("%d\n", sum);
    return 0;
}