#include<stdio.h>
#include<stdint.h>

int main(void){
    int arr[4];
    int* ptr = (int*)0x110;
    intptr_t diff;

    printf("ptr-3 = %p\n", ptr -3);
    printf("ptr-2 = %p\n", ptr -2);
    printf("ptr-1 = %p\n", ptr -1);
    printf("ptr+0 = %p\n", ptr);
    printf("ptr+1 = %p\n", ptr +1);
    printf("ptr+2 = %p\n", ptr +2);
    printf("ptr+3 = %p\n", ptr +3);
    printf("(char*)ptr+3 = %p\n", (char*)ptr +3);
    printf("(unsigned)ptr+3 = %x\n", (unsigned)ptr+3);
    
    return 0;
}
