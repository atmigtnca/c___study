#include<stdio.h>

int main(void){
    int rst = 0, theMxmVl=0;
    int dice[3] = {0};
    scanf("%d %d %d", &dice[0], &dice[1], &dice[2]);

    int cnt[7] = {0};
    for (int i = 0; i < 3; i++)
    {
        cnt[dice[i]]++;
    }
    
    for (int i = 1; i <= 6; i++)
    {
        if (cnt[i] == 3)
        {
            rst = 10000+(i*1000);
        }else if (cnt[i] == 2)
        {
            rst = 1000+(i*100);
        }
    }

    if (rst == 0){
        for (int i = 0; i <=2 ; i++)
        {
            theMxmVl = theMxmVl > dice[i]?theMxmVl:dice[i];
            rst = theMxmVl * 100;
        }   
    }

    printf("%d\n", rst);
    return 0;
}