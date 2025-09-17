#include <stdio.h>
#include <string.h>

int main(void)
{
    char ar[101] = {'\0'};
    scanf("%s", ar);
    int len = strlen(ar);
    int cut = len; // 총 길이에서 차감
    int ct = 0;    // 증가증가

    while (ct < len)
    {
        if (ar[ct] == 'c' && (len - ct >= 2))
        {
            if (ar[ct + 1] == '=' || ar[ct + 1] == '-')
            {
                cut--;
                ct++;
                continue;
            }
        }
        else if (ar[ct] == 'd' && (len - ct >= 2))
        {
            if (ar[ct + 1] == '-')
            {
                cut--;
                ct += 2;
                continue;
            }
            else if (ar[ct + 1] == 'z' && ar[ct + 2] == '=')
            {
                cut -= 2;
                ct += 3;
                continue;
            }
        }
        else if (ar[ct] == 'j' && (ct > 0))
        {
            if (ar[ct - 1] == 'l' || ar[ct - 1] == 'n')
            {
                cut--;
                ct++;
                continue;
            }
        }
        else if (ar[ct] == '=' && (ct > 0))
        {
            if (ar[ct - 1] == 's' || ar[ct - 1] == 'z')
            {
                cut--;
                ct++;
                continue;
            }
        }
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

// int cut = len, ct = 0;

// while (ct < len)
// {
//     int tw = *(pkr + ct) + *(pkr + (ct + 1));
//     for (int i = 0; i < 7; i++)
//     {
//         if (tw == *(da + i))
//         {
//             if ((ct > 0) && *(pkr + (ct - 1)) == 100)
//             {

//                 printf("-1->%c g=%d i=%d\n", *(pkr + ct), ct, i);
//                 cut -= 2;
//                 ct += 2;
//                 break;
//             }
//             else
//             {
//                 printf("-2->%c g=%d i=%d\n", *(pkr + ct), ct, i);
//                 ct += 2;
//                 cut--;
//                 break;
//             }
//         }
//     }
//     printf("-3->%c g=%d \n", *(pkr + ct), ct);
//     ct++;
// }