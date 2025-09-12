#include <stdio.h>

void swap(int *px, int *py)
{
    int tmp = *px;
    *px = *py;
    *py = tmp;
}

int main(void)
{
    int x = 5;
    int y = 3;

    printf("x = %d\ty = %d\n", x, y);
    swap(&x, &y);
    printf("x = %d\ty = %d\n", x, y);

    return 0;
}