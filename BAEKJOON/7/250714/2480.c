#include<stdio.h>


int main(void){
    int a,b,c, rslt=0, bgstThing=0,stage=0;
    scanf("%d %d %d",&a,&b,&c);

    int dice[3] = {a,b,c};

    if (dice[0] == dice[1] && dice[0] == dice[2])
    {
        rslt = 10000 + dice[0] * 1000;
        stage = 1;
    }else if (dice[0] == dice[2])
    {
        rslt = 1000 + dice[0] * 100;
        stage = 1;
    }else if (dice[1] == dice[2])
    {
        rslt = 1000 + dice[1] * 100;
        stage = 1;
    }else if (dice[0] == dice[1])
    {
        rslt = 1000 + dice[0] * 100;
        stage = 1;
    }

    for (int i = 0; i < 3; i++)
    {
        bgstThing = dice[i]>bgstThing?dice[i]:bgstThing;
    }
    
    if (stage == 1)
    {
        printf("%d", rslt);
    }else
    {
        printf("%d", bgstThing*100);
    }
    
    return 0;
}