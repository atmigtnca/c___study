#include<stdio.h>

int main(void){
    int t=0;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int h, w, n;
        scanf("%d %d %d", &h, &w, &n);
        
        int  ho[h][w];
        int la = 0;

        for (int x = 1; x <= w; x++){
            for (int y = 1; y <= h; y++){
                la += 1;
                if (la == n){
                    printf("%d\n", 100*y + x);
                }
            }
        }
    }
    return 0;

}
