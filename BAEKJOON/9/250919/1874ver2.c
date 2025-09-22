#include <stdio.h>
#define LE 200000

int stArr(int at, int aut, char *apt, char *aspt)
{
    int n = at;
    if (*(apt+n) == )
    {
        /* code */
    }
    
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int nr[n], snr[n];
    int *npt = nr, *spt = snr; // npt는 기본 1~n까지 spt 는 특정한 숫자 찾는거
    for (int i = 0; i < n; i++)
    {
        scanf("%d", npt + i);
    }
    int ct = 0, cut = 0; // ct 는 발견 cut 는 기호 저장
    char chc[LE] = {'\0'};
    char *plma = chc; // + - 부호저장

    return 0;
}

// for (int j = 1; j <= n; j++)
// {
//     *(plma + cut) = '+';
//     cut++;
//     *(spt + (j - 1)) = j;
//     if (*(spt + (j - 1)) == *(npt + ct))
//     {
//         while (1)
//         {
//             if ()
//             {

//             }
//             *(plma + cut) = '-';
//             cut++;
//         }
//     }
// }