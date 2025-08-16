#include<stdio.h>
#include<string.h>
int arr[10000] = {0}, max = 0;
void push(int x){arr[max] = x;max++;}
void pop(void){
    if (max > 0)printf("%d\n", arr[0]);
    else printf("-1\n");
    for (int i = 0; i < max; i++) arr[i] = arr[i+1];
    arr[max] = 0;
    if (max > 0)max--;
}
void size(void){printf("%d\n", max);}
void empty(void){
    if (max > 0)printf("0\n");
    else printf("1\n");
}
void front(void){
    if (max > 0)printf("%d\n", arr[0]);
    else printf("-1\n");
}
void back(void){
    if (max > 0)printf("%d\n", arr[max-1]);
    else printf("-1\n");
}
int main(void){
    int n;scanf("%d", &n);
    for (int i = 0; i < n; i++){
        char in[7] = {'0'};int x;scanf("%s", in);
        if (strcmp(in, "push") == 0 ){scanf("%d", &x);push(x);}
        else if (strcmp(in, "pop") == 0 )pop();
        else if (strcmp(in, "size") == 0 )size();
        else if (strcmp(in, "empty") == 0 )empty();
        else if (strcmp(in, "front") == 0 )front();
        else if (strcmp(in, "back") == 0 )back();
    }
    return 0;
}