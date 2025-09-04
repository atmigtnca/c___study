#include <stdio.h>

int main(void) {
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);
    printf("%d\n", (v - a + (a - b) - 1) / (a - b) + 1);
    return 0;
}