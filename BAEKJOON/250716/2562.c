#include<stdio.h>
int main(void){
    int mA =0, a;
    int arr[9];
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
        if (mA < arr[i])
        {
            mA = arr[i];
            a = i;
        }
    }
    printf("%d\n%d\n", mA, a+1);
}