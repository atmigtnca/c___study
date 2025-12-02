#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;
int vis[301][301];
int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};
queue<pair<int, int>> cur;

int bfs(int siz, int trow, int tcol)
{
    while (!cur.empty())
    {
        auto [ny, nx] = cur.front();

        cur.pop();
        for (size_t i = 0; i < 8; i++)
        {
            int cy = ny + dy[i];
            int cx = nx + dx[i];
            if (cy < 0 || cy >= siz || cx < 0 || cx >= siz)
            {
                continue;
            }
            if (vis[cy][cx] != -1)
            {
                continue;
            }
            cur.push({cy, cx});
            vis[cy][cx] = vis[ny][nx] + 1;
            if (cy == trow && cx == tcol)
            {
                return vis[cy][cx];
            }
        }
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int c;
    cin >> c;

    for (int i = 0; i < c; i++)
    {
        int siz, srow, scol, trow, tcol;
        cin >> siz;
        cin >> srow >> scol;
        cin >> trow >> tcol;
        if (srow == trow && scol == tcol)
        {
            cout << 0 << '\n';
            continue;
        }
        size_t tmp = cur.size();
        for (size_t i = 0; i < tmp; i++)
        {
            cur.pop();
        }
        fill(&vis[0][0], &vis[siz - 1][siz], -1);
        cur.push({srow, scol});
        vis[srow][scol] = 0;
        cout << bfs(siz, trow, tcol) << '\n';
    }

    return 0;
}