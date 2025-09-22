#include <stdio.h>
#include <string.h>
#define LE 51

int main(void)
{
    float gp = 0, aL = 0; // gp: 학점

    char obj[LE] = {'\0'};

    scanf("%s", obj);

    printf("%d\n", strlen(obj));
    // if (gp == 0)
    // {
    //     printf("0.000000\n");
    //     return 0;
    // }

    // printf("\nf-gp= %f aL=%f\n", gp, aL);

    return 0;
}
