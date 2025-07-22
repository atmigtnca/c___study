#include<stdio.h>

int max(int x, int y, int z){
    int result = x > y ? x : y ;
    result = result > z ? result : z;
    return result;
}

int main(void){
    printf("%d\n",max(1,2,3));

    return 0;
}