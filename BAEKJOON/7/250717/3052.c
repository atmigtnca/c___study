#include<stdio.h>

int main(void){
    int arr1[10];
    int sum =0;

    for (int i = 0; i < (sizeof(arr1) / sizeof(int)); i++)
    {
        scanf("%d", &arr1[i]);
        arr1[i] %= 42;
    }


    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <10; j++)
        {
            if (i == j)
            {
                continue;
            }else if (arr1[i] == arr1[j])
            {
                arr1[j] = -1;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr1[i] != -1)
        {
            sum += 1;
        }
    }
    printf("%d\n", sum);
    
}
