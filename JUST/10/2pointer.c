#include <stdio.h>

int main(void)
{
    int arr[3][2] = {{11, 22},
                     {33, 44},
                     {55, 66}};

    int (*pointer)[2] = arr;

    printf("%d\n", **pointer);
    printf("%d\n", *(*pointer + 1));
    printf("%d\n", *(*(pointer + 2) + 1));

    return 0;
}