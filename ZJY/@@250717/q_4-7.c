#include<stdio.h>
/*
int main(void){
    for (int i = 123; i <= 789 ; i+=333)
    {
        printf("%d\n",i);
    }
    return 0;
}
*/
int main(void) {
    for (int i = 1; i <= 123; i++) {
        printf("%3d ", i);
        if (i % 3 == 0) {
            printf("\n");
        }
    }
    return 0;
}