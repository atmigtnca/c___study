#include<stdio.h>

int main(void){
    int N, Sz[6] = {0}, T, P, AL=0;

    scanf("%d", &N);
    for (int i = 0; i < 6; i++) scanf("%d", &Sz[i]);
    scanf("%d %d", &T, &P);

    for (int i = 0; i < 6; i++){
        if (Sz[i] == 0)continue;
        AL += Sz[i] / T;
        if (Sz[i] % T != 0)AL++;
    }
    
    printf("%d\n%d %d\n", AL, N/P, N%P);
}