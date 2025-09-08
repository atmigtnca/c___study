#include <stdio.h>

int main(void) {
    int n, MAX = 0;
    scanf("%d", &n);
    int ar[2000002] = {0};

    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        if (a == 0) {
            ar[1000001] = 2000009;
        }

        if (a > 0) {
            ar[a + 1000001] = a;
        } else {
            ar[a + 1000001] = a;
        }

        if (a > MAX) {
            MAX = a + 100001;
        }
    }

    for (int i = 1; i <= MAX; i++) {
        if (ar[i] != 0) {
            printf("%d\n", ar[i]);
        } else if (ar[i] == 2000009) {
            printf("0\n");
        }
    }

    return 0;
}
