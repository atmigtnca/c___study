#include<stdio.h>

int main(void){
    int n, m, card[100] = {0};
    int su[n][n][n];
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &card[i]);
    }
    
    //maX = card[0] + card[1] + card[2];

    if (n == 3)
    {
        printf("%d\n", card[0]+card[1]+card[2]);
        goto cal;
    }


    for (int x = 0;; x++)
    {
        for (int y = 0; ; y++)
        {
            for (int z = 0; ; z++)
            {
                
            }
            
        }
        
    }
    
    cal:
    return 0;
}