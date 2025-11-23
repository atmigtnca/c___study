#include <iostream>
#include <queue>
#include <vector>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> gra(n + 1);
    vector<bool> vis(n, false);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        gra[u].push_back(v);
        gra[v].push_back(u);
    }

    queue<int> cur;
    int rst = 0;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
        {
            continue;
        }
        cur.push(i);
        vis[i] = true;
        rst++;
        while (!cur.empty())
        {
            int spt = cur.front();
            cur.pop();
            for (auto mem : gra[spt])
            {
                if (vis[mem])
                {
                    continue;
                }
                cur.push(mem);
                vis[mem] = true;
            }
        }
    }

    cout << rst << '\n';

    return 0;
}