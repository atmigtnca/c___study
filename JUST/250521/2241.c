#include<stdio.h>

int Show(void);

int main(void){
    int res;
    res = Show();
    printf("전달받은 값은 %d 입니다.\n",res);

    return 0;

}

int Show(void){
    return 11;
}