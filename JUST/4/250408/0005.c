#include <stdio.h>

int main(){
    int x,y,z,max;
     printf("세 수를 입력하세요 ? ");
     scanf("%d %d %d",&x,&y,&z);
     printf("x:%d, y:%d, z:%d\n",x,y,z);

     max = (x>y?x:y);
     max = (max>z? max:z);
     printf("가장 큰 값: %d \n", max);

     return 0;
}