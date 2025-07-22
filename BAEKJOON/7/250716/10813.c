#include<stdio.h>
int main(void){
    int n,m;
    scanf("%d %d", &n, &m);
    int bsk[n+1];
    for (int i = 1; i <= n; i++)bsk[i] = i;
    for (int i = 0; i < m; i++){
        int b1, b2 ,tmp;
        scanf("%d %d", &b1, &b2);
        tmp = bsk[b1];
        bsk[b1] = bsk[b2];
        bsk[b2] = tmp;
    }
    for (int i = 1; i <= n; i++)printf("%d ", bsk[i]);
}