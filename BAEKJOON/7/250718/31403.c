#include<stdio.h>
#include<stdlib.h>


int main(void){
    int arr[3] = {0}, k;
    char a[10];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    sprintf(a, "%d%d", arr[0], arr[1]);

    k = atoi(a);
    
    printf("%d\n", arr[0] + arr[1] - arr[2]);
    printf("%d\n", k-arr[2]);

}