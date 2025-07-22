#include<stdio.h>
int main(void){
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        int r = 0;
        char ss[20] = {'\0'};
        scanf("%d", &r);
        scanf("%s", ss);
        for (int j = 0;; j++){
            if (ss[j] == '\0'){
                puts("");
                break;
            }
            for (int k = 0; k < r; k++)printf("%c", ss[j]);
        }
    }
    return 0;
}