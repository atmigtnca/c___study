#include <stdio.h>

#define MAX 10000  // 최대 자릿수 저장 공간

// x와 현재 result 배열을 곱해줌
void multiply(int x, int result[], int *size) {
    int carry = 0;
    for (int i = 0; i < *size; i++) {
        int prod = result[i] * x + carry;
        result[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry) {
        result[(*size)++] = carry % 10;
        carry /= 10;
    }
}

int main() {
    int n;
    printf("팩토리얼을 계산할 숫자를 입력하세요: ");
    scanf("%d", &n);

    int result[MAX];
    int size = 1;
    result[0] = 1;

    for (int i = 2; i <= n; i++) {
        multiply(i, result, &size);
    }

    printf("%d! =\n", n);
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");
    printf("자릿수: %d자리\n", size);

    return 0;
}
