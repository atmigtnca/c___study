#include <stdio.h>
#include <stdlib.h>
void ll_input(), ll_print(), ll_update(), ll_delete();

struct NODE
{
    int ID;
    int vlaue;
    struct NODE *next;
} *head, *tail, *ptr;

int main(void)
{
    head = NULL;
    int index, flag = 0;
    while (flag == 0)
    {
        printf("Enter [(1)Input, (2)Print, (3)Update, (4)Delete, (5)Exit]: ");
        scanf("%d", &index);
        if (index == 1)
        {
            ll_print();
        }
        else if (index == 2)
        {
            ll_print();
        }
        else if (index == 3)
        {
            ll_update();
        }
        else if (index == 4)
        {
            ll_delete();
        }
        else if (index == 5)
        {
            printf("Exit this Program\n");
            flag = 1;
        }
        else
        {
            printf("Enter Again (between 1 and 5)\n");
        }
        return 0;
    }
}

void ll_input()
{
    int in_ID, in_value;
    printf("\tID, value:");
    scanf("%d %d", in_ID, in_value);
    ptr = (struct NODE *)malloc(sizeof(struct NODE));
    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        tail->next = ptr;
    }
    ptr->ID = in_ID;
    ptr->vlaue = in_value;
    ptr->next = NULL;
    tail = ptr;
    ll_print();
}
