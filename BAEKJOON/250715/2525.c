#include<stdio.h>

int main(void){
    int mnt=0, hr=0;

    scanf("%d %d",&hr, &mnt);

    mnt -= 45;

    if (mnt >= 60)
    {
        hr += mnt / 60;
        mnt %= 60;
    }else if (mnt < 0)
    {
        hr -= 1;
        mnt += 60;
    }
    
    if (hr >= 24)
    {
        hr -= 24;
    }else if (hr < 0)
    {
        hr += 24;
    }
    
    printf("%d %d\n", hr, mnt);

    return 0;
}
