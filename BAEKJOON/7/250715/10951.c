/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int capacity = 16;
    int count = 0;
    int (*sum)[2] = malloc(capacity * sizeof *sum);
    if (!sum) return 1;

    int a, b;
    while (scanf("%d %d", &a, &b) == 2) {
        if (count >= capacity) {
            capacity *= 2;
            int (*tmp)[2] = realloc(sum, capacity * sizeof *sum);
            if (!tmp) {
                free(sum);
                return 1;
            }
            sum = tmp;
        }
        sum[count][0] = a;
        sum[count][1] = b;
        count++;
    }

    for (int i = 0; i < count; i++) {
        printf("%d\n", sum[i][0] + sum[i][1]);
    }

    free(sum);
    return 0;
}
*/