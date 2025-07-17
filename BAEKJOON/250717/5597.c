#include<stdio.h>

int main(void){
    int atnd[31] = {0};
    int k=0;
    int atnd2[2] = {0};

    for (int i = 1; i <= 28; i++)
    {
        int a;
        scanf("%d", &a);
        atnd[a] = a;
    }


    for (int i = 1; i <= 30; i++)
    {
        if (i == atnd[i])
        {
            continue;
        }else
        {
            atnd2[k] = i;
            k += 1;
        }
    }

    if (atnd2[0] < atnd2[1])
    {
        printf("%d\n%d\n", atnd2[0], atnd2[1]);
    }else
    {
        printf("%d\n%d\n", atnd2[1], atnd2[0]);
    }
    
    return 0;
}

/*
#include<stdio.h>
int main(void){
    int atnd[31];
    int k=0;
    int atnd2[2];
    for (int i = 1; i <= 28; i++){
        int a;
        scanf("%d", &a);
        atnd[a] = a;
    }
    for (int i = 1; i <= 30; i++){
        if (i == atnd[i]) continue;
        else{
            atnd2[k] = i;
            k += 1;
        }
    }
    if (atnd2[0] < atnd2[1]) printf("%d\n%d\n", atnd2[0], atnd2[1]);
        else printf("%d\n%d\n", atnd2[1], atnd2[0]);
}
*/