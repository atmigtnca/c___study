#include<stdio.h>

int main(void){
    int tmp, rst, rtg[3];

    while (1){
        for (int i = 0; i < 3; i++)scanf("%d", &rtg[i]);
        if (rtg[0] == 0)break;
        
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2 - i; j++) {
                if (rtg[j] > rtg[j + 1]) {
                    tmp = rtg[j];
                    rtg[j] = rtg[j + 1];
                    rtg[j + 1] = tmp;
                }
            }
        }
        rst = (rtg[0]*rtg[0]) + (rtg[1]*rtg[1]);
    
        if (rst == (rtg[2]*rtg[2]))printf("right\n");
        else printf("wrong\n");
    }

    return 0;
}