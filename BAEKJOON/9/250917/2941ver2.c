#include <stdio.h>
#include <string.h>

int main(void)
{
    char ar[101] = {'\0'};
    int ka[101] = {0}, ju[7] = {144, 145, 160, 176, 183, 214, 216};
    int *pkr = ka, *da = ju;
    scanf("%s", ar);

    int len = strlen(ar);
    for (int i = 0; i < len; i++)
    {
        *(pkr + i) = ar[i];
    }
    int cut = len, ct = 0;

    while (ct < len)
    {
        int tw = *(pkr + ct) + *(pkr + (ct + 1));
        for (int i = 0; i < 7; i++)
        {
            if (tw == *(da + i))
            {
                if ((ct > 0) && *(pkr + (ct - 1)) == 100)
                {

                    printf("-1->%c g=%d i=%d\n", *(pkr + ct), ct, i);
                    cut -= 2;
                    ct += 2;
                    break;
                }
                else
                {
                    printf("-2->%c g=%d i=%d\n", *(pkr + ct), ct, i);
                    ct += 2;
                    cut--;
                    break;
                }
            }
        }
        printf("-3->%c g=%d \n", *(pkr + ct), ct);
        ct++;
    }
    printf("%d\n", cut);
    return 0;
}

/*

c=  160
c-  144
dz= 283 <- 유일한 3개
d-  145
lj  214
nj  216
s=  176
z=  183

- -> 45
= -> 61
c -> 99
d -> 100
j -> 106
l -> 108
n -> 110
s -> 115
z -> 122

*/
