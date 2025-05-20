#include <stdio.h>

void func(int arr[]){
    for(int i=0; i<2;i++){
        int tmp=arr[i];
        arr[i]=arr[4-i];
        arr[4-i]=tmp;
    }
}

int main(int argc, char*argv[]){
    int arr1[5],arr2[5];
    for(int i=0; i<5; i++) scanf("%d", &arr1[i]);
    for(int i=0; i<5; i++) scanf("%d", &arr2[i]);

    func(arr1);
    func(arr2);

    for(int i=0; i<5; i++) printf("%d",arr1[i]);
    printf("\n");
    for(int i=0; i<5; i++) printf("%d", arr2[i]);

    return 0;
}