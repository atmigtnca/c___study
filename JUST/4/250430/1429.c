#include<stdio.h>

int main(){
    int a,b;
    for (a=2;a<9; a++)
    {
        b = 1;
        while (b<10)
        {
            if ((a%2)==0)
            {
                printf("%d * %d = %d\n",a,b,a*b);
            }
            else  
                break;
            b++;
        }
        printf("\n");
    }
    return 0;
    
}
