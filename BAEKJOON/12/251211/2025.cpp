#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;
queue<pair<int, int>> zone;
int N;

void iptfnc()
{
    cin >> N;

    int cnt = 0;
    for (int i = 1; i <= N; i++)
    {
        int ipt;
        cin >> ipt;
        if (!ipt)
        {
            cnt++;
            if (i == N && cnt)
            {
                zone.push({0, cnt});
            }
        }
        else
        {
            if (cnt)
            {
                zone.push({0, cnt});
            }
            zone.push({1, i});

            cnt = 0;
        }
    }
}

int rstfnc()
{
    int rst = 0;
    while (!zone.empty())
    {
        auto [mode, len] = zone.front();
        zone.pop();

        if (mode == 1)
        {
            rst += 3;
        }
        else if (mode == 0)
        {
            if (len <= 5)
            {
                rst += 3 * len;
            }
            else
            {
                rst += 5 * (len - 2);
            }
        }
    }
    return rst;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    iptfnc();
    cout << rstfnc() << '\n';

    return 0;
}