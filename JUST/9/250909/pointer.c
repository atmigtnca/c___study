#include <stdio.h>
int main(void) {
    char (*arr)[3];

    char tmp1[3] = {'a', 'b', 'c'};
    char tmp2[3] = {'d', 'e', 'f'};
    printf("tmp1[3]의 주소 : %p\n", tmp1);
    printf("tmp2[3]의 주소 : %p\n", tmp2);

    puts("");

    arr = &tmp1;
    printf("arr의 주소 : %p\t 문자열", arr);
    for (int i = 0; i < sizeof(*arr); i++) {
        printf("%c", (*arr)[i]);
    }
    puts("");

    arr = &tmp2;
    printf("arr의 주소 : %p\t 문자열", arr);
    for (int i = 0; i < sizeof(*arr); i++) {
        printf("%c", (*arr)[i]);
    }
    puts("");

    return 0;
}