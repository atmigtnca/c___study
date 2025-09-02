#include <stdio.h>

int main(void) {
    char ho[2];

    scanf("%c", ho);
    if (ho[0] == '(') {
        printf("YES");
    }

    return 0;
}