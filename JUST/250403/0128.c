#include <stdio.h>

int main(){
    enum Color {red, green,blue,white,black} my_color;

    my_color = white;

    printf("%d\n", my_color);

    printf("%d %d %d\n", red,green,black);

    puts("c language...");
    putchar('A');

    return 0;
}