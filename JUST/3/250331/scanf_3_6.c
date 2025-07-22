# include <stdio.h>

int main()
{
    char gender;
    int age;
    double height;

    printf("성별(남:m, 여:w) ? ");
    scanf("%c", &gender);
    printf("나이 ? ");
    scanf("%d", &age);
    printf("신장 ? ");
    scanf("%lf", &height);
    printf("\n성별: %c, 나이: %d, 신장: %lf \n", gender,age,height);

    return 0;
}