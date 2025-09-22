#include <stdio.h>
#define LE 200000

int main(void)
{
    int n;
    scanf("%d", &n);
    int nr[n], snr[n];
    int *npt = nr, *spt = snr;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", npt + i);
    }
    int ct = 0, cut = 0; // ct 는 발견 cut 는 기호 저장
    char chc[LE] = {'\0'};
    char *plma = chc;
    for (int j = 1; j <= n; j++)
    {
        *(plma + cut) = '+';
        cut++;
        *(spt + (j - 1)) = j;
        if (*(spt + (j - 1)) == *(npt + ct))
        {
            while (1)
            {
                if ()
                {
                    
                }
                *(plma + cut) = '-';
                cut++;
            }
        }
    }

    return 0;
}