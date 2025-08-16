#include<stdio.h>

int main(void){
    int n, k, arr[5000], cart[5000];
    if (scanf("%d %d", &n, &k)!= 2) return 0;
    int tuc = 0, max = n-1;
    for (int i = 0; i < n; i++)arr[i] = i+1;
    for (int j = 0; j < n; j++){
        int cut = 1;
        while (1){
            if (tuc > max)tuc = 0;
            if (cut == k){
                cart[j] = arr[tuc];
                for (int i = tuc; i < max; i++)arr[i] = arr[i+1];
                max--;
                break;
            }
            cut++;
            tuc++;
        }
    }
    putchar('<');
    for (int i = 0; i < n; i++){
        printf("%d", cart[i]);
        if (i != n-1)printf(", ");
    }
    putchar('>');
    putchar('\n');
    return 0;
}