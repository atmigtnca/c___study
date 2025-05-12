#include <stdio.h>
#include <time.h>

int main(int argc, char * argv[])
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("모두 행복한 %d월 되세요~\n", tm.tm_mon+1);

    return 0;
}