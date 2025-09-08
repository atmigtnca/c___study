#include <stdio.h>

int main(void) {
    int n, MAX = 0;
    scanf("%d", &n);
    int ar[10001] = {0};

    for (int i = 0; i < n; i++) {
        int m;
        scanf("%d", &m);
        ar[m]++;
        if (m > MAX) {
            MAX = m;
        }
    }

    for (int f = 0; f <= MAX; f++) {
        if (ar[f] != 0) {
            for (int r = 0; r < ar[f]; r++) {
                printf("%d\n", f);
            }
        }
    }

    return 0;
}