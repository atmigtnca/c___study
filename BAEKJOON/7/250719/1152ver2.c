#include<stdio.h>

int main(void){
    int ch=0;
    char arr[1000000] = {'\0'};
    fgets(arr, sizeof(arr), stdin);

    for (int i = 0;; i++)
    {
        if(arr[0] == ' '){
            ch -= 1;
        }else if (arr[i] == ' ')
        {
            ch += 1;
        }else if (arr[i] == '\0')
        {
            if (arr[i-1] == ' ')
            {
                ch -= 1;
            }
            break;
        }
    }

    printf("%d\n", ch+1);
    return 0;
}