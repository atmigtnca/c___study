#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        ar[i] = a;
        for (int k = 0; k < i; k++) {
            if (ar[k] > ar[i]) {
                int m = ar[i];
                ar[i] = ar[k];
                ar[k] = m;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", ar[i]);
    }

    return 0;
}