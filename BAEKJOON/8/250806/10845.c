#include<stdio.h>

void push(int arr[], int n, int k);
void pop(int arr[]);
void size(int arr[]);
void empty(int arr[]);
void front(int arr[]);
void back(int arr[]);


int main(void){
    int qq[1000], push_n=0;

    return 0;
}

void push(int arr[], int n, int k){
    arr[k] = n;
}

void pop(int arr[]){
    printf("%d\n", arr[0]);
    for (int i = 0;; i++)
    {
        if (arr[i] == 0)
        {
            break;
        }
        arr[i] = arr[i+1];
    }
}

void size(int arr[]){
    int i=0, sum = 0;;
    while (arr[i])
    {
        sum++;
        i++;
    }
    printf("%d\n", sum);
}

void empty(int arr[]){
    int i=0, rst = 0;
    while (arr[i])
    {
        i++;
        rst++;
    }
    if (rst == 0 )
    {
        printf("1\n");
    }else
    {
        printf("0\n");
    }
}

void front(int arr[]){
    
}