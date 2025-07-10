#include <stdio.h>

int main() {
    int n;
    // 사용자로부터 높이(n)를 입력받습니다.
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        // 왼쪽 공백 출력
        for (int s = 0; s < n - i; s++) {
            printf(" ");
        }
        if (i == 1) {
            // 첫 줄은 별 한 개
            printf("*");
        } else {
            // 양끝 별, 중간은 빈 공간
            printf("*");
            for (int s = 0; s < 2 * i - 3; s++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}