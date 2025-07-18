#include<stdio.h>

int main(void){
    char arr[1000000] = {'\0'};
    int ch=0;

    scanf("%s", arr);

    for (int i = 0;; i++)
    {
        if (arr[i] == ' ')
        {
            ch += 1;
        }else if (arr[i] == '\0')
        {
            printf("the end!\n");
            break;
        }
    }

    printf("%d\n", ch+1);
    

    return 0;

}