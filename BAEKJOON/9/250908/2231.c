#include <stdio.h>
#include <string.h>

int main(void) {
    int n, rs = 0, i;
    scanf("%d", &n);
    for (i = 1; i < n; i++) {
        int rst = 0;
        char bu[8] = {'\0'};
        sprintf(bu, "%d", i);
        for (int j = 0; j < strlen(bu); j++) {
            rst += bu[j] - 48;
        }
        rst += i;
        if (rst == n) {
            rs = 1;
            break;
        }
    }
    printf("%d\n", (rs == 0) ? 0 : i);
    return 0;
}