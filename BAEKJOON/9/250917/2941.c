#include <stdio.h>
#include <string.h>

int main(void)
{
    char ar[101] = {'\0'};
    scanf("%s", ar);
    int len = strlen(ar), cut = 0, g = 0;

    while (len > g)
    {
        if (ar[g] == 'c')
        {
            if (ar[g + 1] == '=' && (g + 1) < len)
            {
                cut++;
                g += 2;
                continue;
            }
            else if (ar[g + 1] == '-' && (g + 1) < len)
            {
                cut++;
                g += 2;
                continue;
            }
        }
        else if (ar[g] == 'd')
        {
            if (ar[g + 1] == 'z' && ar[g + 2] == '=' && (g + 2) < len)
            {
                cut++;
                g += 3;
                continue;
            }
            else if (ar[g + 1] == '-' && (g + 1) < len)
            {
                cut++;
                g += 2;
                continue;
            }
        }
        else if (ar[g] == 'l')
        {
            if (ar[g + 1] == 'j' && (g + 1) < len)
            {
                cut++;
                g += 2;
                continue;
            }
        }
        else if (ar[g] == 'n')
        {
            if (ar[g + 1] == 'j' && (g + 1) < len)
            {
                cut++;
                g += 2;
                continue;
            }
        }
        else if (ar[g] == 's')
        {
            if (ar[g + 1] == '=' && (g + 1) < len)
            {
                cut++;
                g += 2;
                continue;
            }
        }
        else if (ar[g] == 's')
        {
            if (ar[g + 1] == '=' && (g + 1) < len)
            {
                cut++;
                g += 2;
                continue;
            }
        }
        else
        {
            cut++;
            g++;
        }
    }
    printf("%d\n", cut);
    return 0;
}