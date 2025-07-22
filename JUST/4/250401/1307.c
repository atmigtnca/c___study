#include <stdio.h>

int main()
{
    int sco;
    char gra;
    scanf("%d",&sco);

    if (sco>=90){
        gra = 'A';
    }else if(sco>=80){
        gra = 'B';
    }else if(sco>=70){
        gra = 'C';
    }else if(sco>=60){
        gra = 'D';
    }else{
        gra = 'F';
    }
    printf("%c", gra);
    return 0;
}