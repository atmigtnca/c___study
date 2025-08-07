#include<stdio.h>

int main(void){
    int all=1, i=0, k;
    int rsl[3];
    char arr[10] = {'\0'}; //곱셈결과
    int rsl2[10] = {'\0'};

    for (int i = 0; i < 3; i++){
        scanf("%d", &rsl[i]);
        all *= rsl[i];
    }
    sprintf(arr, "%d", all);

    while(1){
        k = 0;
        for (int j = 0; j <= 9; j++){
            if (arr[i] == j + '0'){
                rsl2[j] += 1;
                k += 1;
            }
        }
        if (k==0) break;
        i+=1;
    }
    
    for (int i = 0; i <= 9; i++)printf("%d\n", rsl2[i]);
    
    return 0;
}