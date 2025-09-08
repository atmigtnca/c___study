#include <stdio.h>

int main(void) {
    int n, min = 1000000, max = -1000000;
    scanf("%d", &n);
    int ar[2000002] = {0};
    ar[1000001] = 1;

    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        ar[a + 1000001] = a;
        if (a > max) {
            max = a;
        }
        if (a < min) {
            min = a;
        }
    }

    while (min != max + 1) {
        if (ar[min + 1000001] == min) {
            printf("%d\n", min);
        }
        min++;
    }
    return 0;
}