#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 5;
    
    int *arr = malloc(size * sizeof(int)); // int형 변수 5개 크기의 메모리 할당
    
    // 메모리 할당 실패 확인 (매우 중요!)
    if (arr == NULL) {
        printf("메모리 할당 실패!\n");
        return 1;
    }
    
    // malloc은 초기화하지 않으므로 직접 값을 설정해야 함
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // 사용 후 반드시 메모리 해제
    free(arr);
    arr = NULL;  // 댕글링 포인터 방지
    
    return 0;
}
