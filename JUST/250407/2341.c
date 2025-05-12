#include <stdio.h>

int main(){
    int x = 10, y = 1, z = 1;

    ++x, y++;

    printf("x: %d, y: %d, z: %d \n", x,y,z);
    

    z = ++x + y++;

    printf("x: %d, y: %d, z: %d \n", x,y,z);

    printf("x: %d, y: %d, z: %d \n", x++,y++,--z);
    printf("x: %d, y: %d, z: %d \n", ++z,--y,z--);


    return 0;
}