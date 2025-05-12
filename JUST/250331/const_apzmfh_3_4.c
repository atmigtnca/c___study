# include <stdio.h>

#define Even 2
#define Odd 1
#define MSG "seojongho"

int main()
{
    printf("%s \n", MSG);
    printf("Even : %d \n", Even);
    printf("Odd : %d \n", Odd);
    printf("%d + %d = %d \n", Even, Odd,Even+Odd);
    printf("%s \n", MSG);

    return 0;
}