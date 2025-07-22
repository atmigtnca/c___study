#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_NUM 10

int main(void){
    char word[MAX_NUM+1];
    int i, n, len=0;
    char tmp;

    srand((unsigned)time(NULL));

    printf("%d글자이하의 단어를 입력하세요.>", MAX_NUM);
    scanf("%s", word);

    printf("입력한 단어:%s\n", word);

    while (word[len])
    {
        len++;
    }

    for ( i = 0; i < len*2; i++)
    {
        n = rand() % len;

        tmp = word[0];
        word[0] = word[n];
        word[n] = tmp;
    }

    printf("뒤섞은 단어:%s\n", word);

    return 0;
    
    

}