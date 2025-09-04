#include <stdio.h>

int main(void) {
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);
    int t = v - a, g = a - b;
    int f = t / g, na = v - (f * g);
    if (a >= na) {
        printf("%d\n", f + 1);
    } else if (a < na) {
        printf("%d\n", f + 2);
    }
    return 0;
}