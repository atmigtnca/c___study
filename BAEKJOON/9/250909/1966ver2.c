#include <stdio.h>

void prt(int n, int m, int ar[]) {
    // n : 문서의 개수, m : 몇 번째에 놓여 있는지 나타내는.
    int a = 1;
    int b = ar[m];
    for (int i = 0; i < n; i++) {
        if (ar[i] > b) {
            a++;
        }
    }
    for (int k = 0; k < m; k++) {
        if (ar[k] == b) {
            a++;
        }
    }

    printf("--%d\n", a);
}


int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int n, m, ar[101] = {0};
        scanf("%d %d", &n, &m);
        for (int j = 0; j < n; j++) {
            scanf("%d", &ar[j]);
        }
        prt(n, m, ar);
    }

    return 0;
}