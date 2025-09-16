#include <stdio.h>
#include <string.h>
#define SI 101

typedef struct Mem
{
    char na[SI];
    int ag;
    int se;
} mem;

void com(mem *ptr, int a, int b);

int main(void)
{
    int n;
    scanf("%d", &n);
    mem ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %s", &ar[i].ag, ar[i].na);
        ar[i].se = i;
        for (int j = 0; j <= i; j++)
        {
            if (i == j)
            {
                continue;
                printf("1\n");
            }
            if ((ar[i].ag == ar[j].ag) && (ar[i].se > ar[j].se))
            {
                com(ar, i, j);
                printf("2\n");
            }
            else if (ar[i].ag > ar[j].ag)
            {
                com(ar, i, j);
                printf("3\n");
            }
        }
    }

    // for (int a = 0; a < n; a++)
    // {
    //     for (int b = a + 1; b < n; b++)
    //     {
    // if ((ar[a].ag == ar[b].ag) && (ar[a].se > ar[b].se))
    // {
    //     com(ar, a, b);
    // }
    // else if (ar[a].ag > ar[b].ag)
    // {
    //     com(ar, a, b);
    // }
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        printf("%d %s\n", ar[i].ag, ar[i].na);
    }

    return 0;
}

void com(mem *ptr, int a, int b)
{
    int tmp = ptr[a].ag;
    ptr[a].ag = ptr[b].ag;
    ptr[b].ag = tmp;

    char ex[SI];
    strcpy(ex, ptr[a].na);
    strcpy(ptr[a].na, ptr[b].na);
    strcpy(ptr[b].na, ex);

    int tMp = ptr[a].se;
    ptr[a].se = ptr[b].se;
    ptr[b].se = tMp;
}
