#include<stdio.h>
int main(void){
    int n,m;
    scanf("%d %d", &n, &m);
    int arr[n+1];
    for (int i = 1; i <= n; i++)arr[i] = i;
    for (int i = 0; i < m; i++){
        int a, b,tmp;
        scanf("%d %d", &a, &b);
        for (;a < b ; a++,b--){
                tmp = arr[a];
                arr[a] = arr[b];
                arr[b] = tmp;
            }
    }
    for (int i = 1; i <= n; i++)printf("%d ", arr[i]);
}