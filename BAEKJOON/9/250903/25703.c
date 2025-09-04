#include <stdio.h>
int n, k = 3;

void ptr(void) {
    if (n > 2) {
        printf("int ");
        for (int i = 0; i < k; i++) printf("*");
        printf("ptr%d = &ptr%d;\n", k, k - 1);
        k++;
    }
    if (k <= n)
        ptr();
}

int main(void) {
    scanf("%d", &n);
    printf("int a;\nint *ptr = &a;\n");
    if (n > 1) {
        printf("int **ptr2 = &ptr;\n");
        ptr();
    }
    return 0;
}