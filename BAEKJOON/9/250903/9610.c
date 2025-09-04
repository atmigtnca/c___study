#include <stdio.h>
int main(void) {
    int n, ar[5] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        int r = x * y;
        if (r == 0)
            ar[4]++;
        else if (r > 0 && x > 0)
            ar[0]++;
        else if (r > 0)
            ar[2]++;
        else if (r < 0 && x < 0)
            ar[1]++;
        else
            ar[3]++;
    }
    printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d\n", ar[0], ar[1], ar[2], ar[3], ar[4]);
    return 0;
}