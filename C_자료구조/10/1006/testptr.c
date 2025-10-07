#include <stdio.h>

int main(void)
{
    int arr[2][3] = {1, 2, 3, 4, 5, 6};

    int (*ptr)[3] = arr;

    printf("%d\n", *(int *)(ptr + 1));

    return 0;
}