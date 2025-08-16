#include<stdio.h>
#include<string.h>
int arr[10000] = {0}; //큐
int max = 0; //전체 크기



//push X: 정수 X를 큐에 넣는 연산이다.
void push(int x){
    arr[max] = x;
    //printf("%d--%d\n", max, arr[max]);
    max++;
}

//pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
void pop(void){
    if (max > 0)printf("%d\n", arr[0]);
    else printf("-1\n");
    for (int i = 0; i < max; i++) arr[i] = arr[i+1];
    arr[max] = 0;
    if (max > 0)
    {
        max--;
    }
    
}

//size: 큐에 들어있는 정수의 개수를 출력한다.
void size(void){
    printf("%d\n", max);
}

//empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
void empty(void){
    if (max > 0)printf("0\n");
    else printf("1\n");
}

//front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
void front(void){
    if (max > 0)printf("%d\n", arr[0]);
    else printf("-1\n");
}

//큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
void back(void){
    if (max > 0)printf("%d\n", arr[max-1]);
    else printf("-1\n");
}

int main(void){
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char in[7] = {'0'};
        int x;
        scanf("%s", in);
        if (strcmp(in, "push") == 0 )
        {
            scanf("%d", &x);
            push(x);
        }else if (strcmp(in, "pop") == 0 )
        {
            pop();
        }else if (strcmp(in, "size") == 0 )
        {
            size();
        }else if (strcmp(in, "empty") == 0 )
        {
            empty();
        }else if (strcmp(in, "front") == 0 )
        {
            front();
        }else if (strcmp(in, "back") == 0 )
        {
            back();
        }
    }
    
    return 0;
}