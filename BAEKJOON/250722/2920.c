#include<stdio.h>
int main(void){
    int cde[8] = {0};
    int ju = 0, yk = 0;
    for (int i = 0; i < 8; i++)scanf("%d", &cde[i]);
    for (int i = 0; i < 7; i++){
        if (cde[i] < cde[i+1])ju++;
        else if (cde[i] > cde[i+1])yk++;
    }
    if (ju == 7)printf("ascending\n");
    else if (yk == 7)printf("descending\n");
    else printf("mixed\n");
    return 0;
}