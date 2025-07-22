#include<stdio.h>

int main(void){
    int sum, bun, nu;
    scanf("%d", &bun);

    
    for (int i = 0; i < bun; i++)
    {
        sum = 0, nu = 0;
        char ox[80] = {'\0'};
        scanf("%s", ox);
    
        for (int i = 0;; i++)
        {
            if (ox[i] == 'O')
            {
                nu += 1;
                sum += nu;
            }else if (ox[i] == 'X')
            {
                nu = 0;
            }
            if (ox[i] == '\0')
            {
                break;
            }
        }
        printf("%d\n", sum);
    }
    

    return 0;
}