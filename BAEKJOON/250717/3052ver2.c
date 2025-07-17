#include <stdio.h>

int main(void) {
    int seen[42] = {0}, x, count = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &x);
        seen[x % 42] = 1;
    }
    for (int i = 0; i < 42; i++) {
        count += seen[i];
    }
    printf("%d\n", count);
    return 0;
}