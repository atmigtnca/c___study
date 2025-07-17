#include<stdio.h>

int main(void){
    int in, cnt=0;
    char lon[6] = "long ";
    scanf("%d\n",&in);

    cnt = in/4;
    char lon2[6*(cnt+1)];
/*
    for (int i = 0; i < 6*(cnt+1); i++)
    {
        for (int j = 0; j <= 4; j++)
        {
                lon2[(6*i)+j] = lon[j];
        }
    }
*/

    for (int i = 0; i < cnt; i++)
    for (int j = 0; j < 5; j++)
        lon2[6*i + j] = lon[j];
    lon2[6*cnt] = '\0';
    
    printf("%sint", lon2);
    return 0;
}
