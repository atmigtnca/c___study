#include <stdio.h>
#include <stdlib.h>
#include <string.h> // memcpy를 사용하기 위해 필요

int main(void)
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    const int LEN = sizeof(arr) / sizeof(int);

    // 1. arr 크기만큼 동적 메모리 할당
    int *ptr = malloc(sizeof(arr));
    if (ptr == NULL)
    { // 메모리 할당 실패 체크는 좋은 습관
        return 1;
    }

    // 2. arr의 내용을 ptr이 가리키는 힙 메모리로 복사
    // memcpy(목적지, 원본, 크기);
    memcpy(ptr, arr, sizeof(arr));

    // 3. 복사된 메모리의 내용을 출력
    for (int i = 0; i < LEN; i++)
    {
        printf("%d\n", *(ptr + i));
    }

    // 4. 사용이 끝난 동적 메모리는 반드시 해제!
    free(ptr);

    return 0;
}