#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int j = 0; j < n; j++)
    {
        char ho[51] = {'\0'};
        scanf("%s", ho);
        const int ln = strlen(ho);
        if (ln % 2 != 0)
        {
            printf("NO\n");
        }
        else
        {
            int ct = 0;
            for (int k = 0; k < ln; k++)
            {
                if (ct < 0)
                {
                    printf("NO\n");
                    break;
                }
                if (ho[k] == '(')
                {
                    ct++;
                }
                else
                {
                    ct--;
                }
            }
            if (ct == 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}