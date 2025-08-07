#include<stdio.h>

int main(void){
    int dan=1;
    char arr[1000001] = {'\0'};
    
    fgets(arr, sizeof(arr), stdin);

    if (arr[0] == ' ')dan+=-1;

    for (int i = 0;; i++)
    {
        if (arr[i] == ' '){
            if (arr[i+1] != ' ')
            {
                dan++;
                printf("%d %c++\n", i, arr[i+1]);
            }
        }else if (arr[i] == '\0')
        {
            if (arr[i-2] == ' ' || arr[i-1] ==' ')
            {
                dan--;
                printf("%d %c--\n", i, arr[i-1]);
            }
            break;
        }
    }
    
    printf("%d\n", dan);

    return 0;
}