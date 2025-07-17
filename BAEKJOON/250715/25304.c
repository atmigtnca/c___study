#include<stdio.h>
int main(void){
    int ttlPrc, prc=0, cnt=0,typ, mdl=0; //ttlPrc:총금액, prc:가격, cnt:개수, typ:총품목개수, mdl:중간가격
    scanf("%d\n", &ttlPrc);
    scanf("%d\n", &typ);
    while (typ--)
    {
        scanf("%d %d", &prc, &cnt);
        mdl += prc*cnt;
    }
    if (mdl == ttlPrc)printf("Yes\n");
        else printf("No\n");
}