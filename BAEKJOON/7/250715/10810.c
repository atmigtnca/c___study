#include<stdio.h>

int main(void){
    int crt = 0, ln=0;
    scanf("%d %d\n", &crt, &ln);
    int bas[crt+1];
    for (int i = 1; i <= crt; i++)bas[i] = 0;
    for (int i = 1; i <= ln; i++)
    {
        int fi, la, in;
        scanf("%d %d %d\n", &fi, &la, &in);
        for (; fi <= la; fi++)bas[fi] = in;
    }
    for (int i=1; i <= crt; i++)printf("%d ", bas[i]);
}