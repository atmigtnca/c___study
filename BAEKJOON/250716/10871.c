#include<stdio.h>
int main(void){
    int cnt = 0, stn=0, la=0;
    scanf("%d %d", &cnt , &stn);
    int arr[cnt];
    for (int i = 0; i < cnt; i++)
    {
        int u;
        scanf("%d", &u);
        if (u < stn)arr[i] = u;
            else arr[i] = 0;
    }
    for (int i = 0; i < cnt; i++)
    {
        if (arr[i] > 0)printf("%d ", arr[i]);
            else continue;
    }
}