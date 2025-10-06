#include <cstdio>
using namespace std;

int main(void)
{
    int iVar;
    double dVar;
    char str[20];

    printf("int, double, 문자열 입력 :");
    scanf("%d %lf %s", &iVar, &dVar, str);

    printf("%d %f %s\n", iVar, dVar, str);

    return 0;
}