#include<stdio.h>

int main(void){
    int n, m, card[100], max = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) scanf("%d", &card[i]);
    for (int i = 0; i < n - 2 ; i++){
        for (int j = i + 1; j < n -1; j++){
            for (int l = j + 1; l < n; l++){
                int a = card[i] + card[j] + card[l];
                if ((a > max) && (a <= m))max = a;
            }
        }
    }
    printf("%d\n", max);
    return 0;
}