#include <stdio.h>
int main(){
    float ss;
    float l;
    printf("최단거리를 입력해주세요 : ");
    scanf("%f", &ss);
    printf("최장거리를 입력해주세요 : ");
    scanf("%f", &l);

    double t ;
    t = (l - ss)/9;
    printf("%f\n",t);

    float k = 0;
    printf("%.4f\n",ss);

    for (int s = 1;s<10;s++){
        
        k += t;
        printf("%.f\n", ss+k);
    }

    /*
    for (int s=1;s<=10;s++){
        printf("%f\n",s+t);
    }
    */

    return 0;

}


