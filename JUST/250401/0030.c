#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a,&b);
    
    int last = (b-(b/10)*10);
    printf("%d \n", a*last);

    int first = b/100;
    int sec = b-last-(first*100);

    printf("%d \n",a*sec/10);

    printf("%d \n" , a*first);
    printf("%d \n", a*b);

    return 0;
}