#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;
#define Y first
#define X second
vector<int> dx = {-1, 0, 1, 0};
vector<int> dy = {0, 1, 0, -1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int r, c;
    cin >> r >> c;

    vector<vector<int>> mro(r, vector<int>(c, 0));   // 미로
    vector<vector<int>> vis(r, vector<int>(c, -1));  // 불이 난 시간 체크

    queue<pair<int, int>> fire;  // 불난위치
    pair<int, int> jh;           // 지훈이의 초기 위치

    string ipt;  // 행 입력
    for (size_t i = 0; i < r; i++)
    {
        cin >> ipt;
        for (size_t j = 0; j < c; j++)
        {
            char tmp = ipt[j];
            if (tmp == '#')  // 벽은 mro에서 -1로 체크
            {
                mro[i][j] = -1;
            }
            else if (tmp == 'J')  // 지훈이 위치 표시
            {
                jh = {i, j};
            }
            else if (tmp == 'F')  // 불난위치표시
            {
                fire.push({i, j});
            }
        }
    }

    while (!fire.empty())  // 불이 난 시간 체크
    {
        queue<pair<int, int>> cur;
        cur.push(fire.front());  // 불이난위치
        fire.pop();
        vis[cur.front().Y][cur.front().X] = 0;  // 시간체크
        while (!cur.empty())
        {
            auto spt = cur.front();
            cur.pop();
            for (size_t i = 0; i < 4; i++)
            {
                int ny = spt.Y + dy[i], nx = spt.X + dx[i];
                if ((ny < 0 || ny >= r || nx < 0 || nx >= c) ||  // 범위 밖 방지
                    (vis[ny][nx] != -1 &&
                     vis[spt.Y][spt.X] + 1 >
                         vis[ny][nx]))  // 다른 불난 위치랑 만났을때 먼저
                                        // 불난위치를 만나면 무시
                {
                    continue;
                }
                if (mro[ny][nx] != -1 &&
                    vis[ny][nx] == -1)  // 벽을 안만나고 방문한적이 없는곳 체크
                {
                    cur.push({ny, nx});
                    vis[ny][nx] = vis[spt.Y][spt.X] + 1;
                }
            }
        }
    }

    if (vis[jh.Y][jh.X] == 0)
    {
        // cout << jh.first << ' ' << jh.second << '\n';
        cout << "IMPOSSIBLE" << '\n';
        return 0;
    }

    int rst;
    queue<pair<int, int>> esc;
    vector<vector<int>> rslt(r, vector<int>(c, -1));  // 시간 체크
    vector<int> result;
    rslt[jh.Y][jh.X] = 0;
    esc.push(jh);

    while (!esc.empty())
    {
        auto spt = esc.front();
        esc.pop();

        if (spt.Y == 0 || spt.Y == r - 1 || spt.X == 0 ||
            spt.X == c - 1)  // 외곽 만나면 중지
        {
            rst = rslt[spt.Y][spt.X] + 1;
            result.push_back(rst);
        }

        for (int i = 0; i < 4; i++)  // BFS
        {
            int ny = spt.Y + dy[i], nx = spt.X + dx[i];
            if (ny < 0 | ny >= r || nx < 0 || nx >= c)
            {
                continue;
            }
            if (vis[ny][nx] > rslt[spt.Y][spt.X])
            {
                rslt[ny][nx] = rslt[spt.Y][spt.X] + 1;
                esc.push({ny, nx});
            }
        }

        // for (size_t i = 0; i < r; i++)
        // {
        //     for (size_t x = 0; x < c; x++)
        //     {
        //         cout << rslt[i][x] << ' ';
        //     }
        //     cout << '\n';
        // }
        // cout << '\n';
        // for (size_t i = 0; i < r; i++)
        // {
        //     for (size_t x = 0; x < c; x++)
        //     {
        //         cout << vis[i][x] << ' ';
        //     }
        //     cout << '\n';
        // }

        // if (!esc.empty())
        // {
        //     cout << jh.first << ' ' << jh.second << '\n';

        //     cout << "IMPOSSIBLE222" << '\n';
        //     return 0;
        // }
    }

    if (!result.empty())
    {
        sort(result.begin(), result.end());
        if (result[0] == -1)
        {
            cout << "IMPOSSIBLE" << '\n';
        }
        else
        {
            cout << result[0] << '\n';
        }
    }
    else
    {
        cout << "IMPOSSIBLE" << '\n';
    }

    // cout << rst << '\n';

    return 0;
}