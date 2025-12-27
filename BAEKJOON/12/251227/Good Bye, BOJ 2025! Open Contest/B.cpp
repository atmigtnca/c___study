#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
vector<bool> jump;
ll N, L, K;  // N : N번 재생, L : 총 L 프레임, K : 총 K번 점프

ll finD(int srt, int end)  // 주어진 범위에 jump가 몇개 있는지
{
    if (srt == end)
    {
        if (jump[srt])
        {
            return 1;
        }
    }
    else if (srt < end)
    {
        for (int i = srt; i <= end; i++)
        {
            /* code */
        }
    }
    else if (srt > end)
    {
    }
}

ll rst()
{
    ll endCur = 1;  // 커서
    ll endMus;
    ll prm = 0;  // 총 prm번 프레임
    ll mul = 1;  // 현재 배속
    while (1)
    {
        prm++;
        int srt = (endCur - (mul - 1)) % L, end = endCur % L;
        // bool chk = ((endCur - (mul - 1)) / L)  (endCur / L) ? true : false;

        int srtBlk = (endCur - (mul - 1)) / L, endBlk = endCur / L;
        mul += finD(srt, end);
        endCur += mul;
        if (endCur / L >= N)
        {
            break;
        }
    }
    return prm;
}

void input()
{
    cin >> N >> L >> K;
    jump.resize(L + 1, false);

    for (ll i = 0; i < K; i++)
    {
        ll ipt;
        cin >> ipt;
        jump[ipt] = true;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    input();
    cout << rst() << '\n';

    return 0;
}
