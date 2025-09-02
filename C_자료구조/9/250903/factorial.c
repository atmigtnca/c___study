#include <stdio.h>

int factorial(int n) {
    printf("factorial(%d)\n", n);
    if (n <= 1) {
        return 1;
    } else
        return (n * factorial(n - 1));
}

int main(void) {
    int n = 10;
    printf("%d\n", factorial(n));
    return 0;
}
