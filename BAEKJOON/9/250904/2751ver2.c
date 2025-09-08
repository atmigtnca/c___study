#include <stdio.h>

int main(void) {
    int n, max = 0, MAX = 0, ct = 0;
    scanf("%d", &n);
    int ar[1000001] = {0};
    int aR[1000001] = {0};

    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        if (a >= 0) {
            aR[a] = a;
            if (a >= MAX) {
                MAX = a;
            }
        } else {
            ar[-a] = a;
            if (-a > max) {
                max = -a;
            }
        }
    }

    while (max > 0) {
        if (ar[max] == -max) {
            printf("%d\n", -max);
        }
        max--;
    }

    while (ct != MAX + 1) {
        if (aR[ct] == ct) {
            printf("%d\n", ct);
        }
        ct++;
    }

    return 0;
}