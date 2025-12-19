#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;
vector<pair<int, int>> rst;  // 도착 기록
queue<int> cur;
bool vis[100001];  // 방문 기록
int dis[100001];   // 거리 기록
int endCnt = 0, endTime = 1e9;
int N, K;

void fnc()
{
    cin >> N >> K;  // N : 출발, K : 도착

    if (N == K)
    {
        cout << 0 << '\n' << 1 << '\n';
        return;
    }

    cur.push(N);
    vis[N] = true;

    while (!cur.empty())
    {
        int spt = cur.front();
        cur.pop();

        if (spt == K)
        {
            rst.push_back({dis[spt], spt});
            // cout << spt << ' ' << dis[spt] << '\n';
            continue;
        }

        int next[3] = {spt - 1, spt + 1, 2 * spt};
        for (auto nxt : next)
        {
            if (nxt < 0 || nxt > 100000 || vis[nxt] != false)
            {
                continue;
            }

            // if ()
            // {

            // }

            cur.push(nxt);
            dis[nxt] = dis[spt] + 1;
            vis[nxt] = true;
        }
    }

    int min_num = rst[0].first;
    int cnt = 0;
    for (auto mem : rst)
    {
        if (mem.first == min_num)
        {
            cnt++;
        }
    }

    cout << min_num << '\n' << cnt << '\n';

    // for (auto mem : rst)
    // {
    //     cout << mem.first << ' ' << mem.second << '\n';
    // }
    // cout << '\n';

    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    fnc();

    return 0;
}