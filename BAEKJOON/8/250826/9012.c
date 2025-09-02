#include <stdio.h>

int main(void) {
    int n, rst;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        rst = 0;
        char ho[51] = {'\0'};
        scanf("%s", ho);

        for (int j = 0;; j++) {
            if (ho[j] == '(') {
                rst++;
            } else if (ho[j] == ')') {
                rst--;
            } else if (ho[j] == '\0') {
                break;
            }
        }
        // printf("%d\n", rst);

        if (rst == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}