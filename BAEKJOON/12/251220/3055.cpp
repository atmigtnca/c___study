#include <iostream>
#include <queue>
#include <string>
#include <utility>
#define Y first
#define X second
using namespace std;
using ll = long long;
queue<pair<int, int>> cur;
pair<int, int> srt;
pair<int, int> edn;
int dy[] = {1, -1, 0, 0};
int dx[] = {0, 0, 1, -1};
int vis[51][51];  // 고슴도치 움직일 때 방문표시 <- 여기서 돌, 굴 표시
int dis[51][51];  // 물 움직일 때 시간 표시
int R, C;

void escBfs()
{
    while (!cur.empty())
    {
        auto [cy, cx] = cur.front();
        cur.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = cy + dy[i];
            int nx = cx + dx[i];
            if (ny < 0 || ny >= R || nx < 0 || nx >= C)
            {
                continue;
            }
            if (vis[ny][nx] != 0)
            {
                continue;
            }

            if (ny == edn.Y && nx == edn.X)
            {
                cout << vis[cy][cx] + 1 << '\n';
                return;
            }

            cur.push({ny, nx});
            vis[ny][nx] = vis[cy][cx] + 1;
        }
    }
    cout << "KAKTUS\n";
    return;
}

void wtrBfs()
{
    int tme = 0;
    while (!cur.empty())
    {
        int sze = cur.size();
        while (sze--)
        {
            auto [cy, cx] = cur.front();
            cur.pop();

            for (int i = 0; i < 4; i++)
            {
                int ny = cy + dy[i];
                int nx = cx + dx[i];
                if (ny < 0 || ny >= R || nx < 0 || nx >= C || vis[ny][nx] == -1)
                {
                    continue;
                }
                if (dis[ny][nx] > 0)
                {
                    continue;
                }
                cur.push({ny, nx});
                dis[ny][nx] = tme + 1;
            }
        }
        tme++;
    }
}

void iptfnc()
{
    cin >> R >> C;
    char ipt;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> ipt;
            if (ipt == 'X')
            {
                vis[i][j] = -1;
            }
            else if (ipt == '*')
            {
                cur.push({i, j});
                vis[i][j] = -1;
            }
            else if (ipt == 'D')
            {
                edn = {i, j};
                vis[i][j] = -1;
            }
            else if (ipt == 'S')
            {
                srt = {i, j};
            }
        }
    }

    wtrBfs();

    cur.push(srt);
    vis[edn.Y][edn.X] = 0;
    dis[edn.Y][edn.X] = 1e9;

    escBfs();

    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    iptfnc();

    return 0;
}