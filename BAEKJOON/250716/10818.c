#include<stdio.h>
int main(void){
    int a = 0, mI = 0, mA = 0;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++) scanf("%d", &arr[i]);
    mI = arr[0];
    mA = arr[0];
    for (int j = 0; j < a; j++)
    {
        if (mI > arr[j])mI = arr[j];
        else if (mA < arr[j])mA = arr[j];
    }
    printf("%d %d", mI ,mA);
}

/*
#include<stdio.h>
int main(){int n,x,mi,ma;scanf("%d%d",&n,&x);mi=ma=x;while(--n){scanf("%d",&x);if(x<mi)mi=x;else if(x>ma)ma=x;}printf("%d %d",mi,ma);}
*/