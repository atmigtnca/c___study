#include <stdio.h>

int main(void)
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int *pl = (int *)arr;

    int len = sizeof(arr) / sizeof(int);
    int sum = 0;

    printf("arr=%p\n", arr);

    while (len--)
    {
        printf("pl=%p \t *pl=%d\n", pl, *pl);
        sum += *(pl++);
    }

    printf("sum=%d\n", sum);

    return 0;
}