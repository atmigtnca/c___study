#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
vector<vector<int>> grp;
vector<int> cnt;
int N, M;

void rstfnc()
{
    int maxIdx, MAX = 0;

    for (int i = 1; i <= N; i++)
    {
        if (cnt[i] > MAX)
        {
            MAX = cnt[i];
            maxIdx = i;
        }
    }

    sort(grp[maxIdx].begin(), grp[maxIdx].end());

    for (auto mem : grp[maxIdx])
    {
        cout << mem << ' ';
    }
    cout << '\n';
}

void iptfnc()
{
    cin >> N >> M;
    grp.resize(N + 1);
    cnt.resize(N + 1, 0);

    while (M--)
    {
        int a, b;
        cin >> a >> b;
        grp[a].push_back(b);
        cnt[a]++;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    iptfnc();
    rstfnc();

    return 0;
}