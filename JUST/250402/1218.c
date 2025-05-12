#include <stdio.h>
int main(int argc,char * argv[])
{
    double val =0;
    for(int i=0;i<1000;i++) val = val + 0.001;

    printf("%lf",val);

    return 0;
}