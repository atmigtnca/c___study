#include <stdio.h>
enum States {New =1, InPrograss=2,Completd=3};

int main()
{
    enum States ss = Completd;
    if (ss==3){
        printf("작업을 진행중입니다.\n");
    }
    return 0;
}
