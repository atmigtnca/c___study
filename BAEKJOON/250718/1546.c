#include<stdio.h>

int main(void){
    int n, m=0;
    scanf("%d", &n);
    float arr[n], aum=0;

    for (int i = 0; i < n; i++){
        scanf("%f", &arr[i]);
        m = (m<arr[i]?arr[i]:m);
    }

    for (int i = 0; i < n; i++) aum += (arr[i]/m)*100;

    printf("%f\n", aum/n);
}