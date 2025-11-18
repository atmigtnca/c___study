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

    vector<vector<int>> mro(r, vector<int>(c, -1));  // 미로
    vector<vector<int>> vis(r, vector<int>(c, -1));  // 불이 난 시간 체크

    queue<pair<int, int>> fire;  // 불난위치
    pair<int, int> jh;           // 지훈이의 초기 위치

    vector<string> ipt(r);
    for (size_t i = 0; i < r; i++)
    {
        cin >> ipt[i];
        for (size_t j = 0; j < c; j++)
        {
            char tmp = ipt[i][j];
            if (tmp == 'J')  // 지훈이 위치 표시
            {
                jh = {i, j};
                mro[i][j] = 0;
            }
            else if (tmp == 'F')  // 불난위치표시
            {
                fire.push({i, j});
                mro[i][j] = 0;
            }
        }
    }

    while (!fire.empty())  // 불이 난 시간 체크
    {
        queue<pair<int, int>> cur;
        cur.push(fire.front()), fire.pop();     // 불이난 위치
        vis[cur.front().Y][cur.front().X] = 0;  // 시간체크

        while (!cur.empty())
        {
            auto spt = cur.front();
            cur.pop();
            for (size_t i = 0; i < 4; i++)
            {
                int ny = spt.Y + dy[i], nx = spt.X + dx[i];
                int &visit = vis[ny][nx], &mid = vis[spt.Y][spt.X];

                if (ny < 0 || ny >= r || nx < 0 || nx >= c)
                {
                    continue;
                }
                if (visit != -1 && mid + 1 > visit)
                {
                    continue;
                }
                if (ipt[ny][nx] != '#')
                {
                    cur.push({ny, nx});
                    visit = mid + 1;
                }

                // for (size_t i = 0; i < r; i++)
                // {
                //     for (size_t j = 0; j < c; j++)
                //     {
                //         cout << vis[i][j] << ' ';
                //     }
                //     cout << '\n';
                // }
                // cout << '\n';
            }
        }
    }

    vector<vector<int>> end(r, vector<int>(c, -1));
    queue<pair<int, int>> esc;
    esc.push(jh);
    end[jh.Y][jh.X] = 0;

    int rst;

    while (!esc.empty())
    {
        auto spt = esc.front();
        esc.pop();

        for (int i = 0; i < 4; i++)  // BFS
        {
            int ny = spt.Y + dy[i], nx = spt.X + dx[i],
                &mid = end[spt.Y][spt.X];
            int& tmp = vis[ny][nx];
            if (ny < 0 || ny >= r || nx < 0 || nx >= c)
            {
                rst = mid + 1;
                cout << rst << '\n';
                return 0;
            }

            for (size_t i = 0; i < r; i++)
            {
                for (size_t j = 0; j < c; j++)
                {
                    cout << end[i][j] << ' ';
                }
                cout << '\n';
            }
            cout << '\n';

            if (tmp > mid)
            {
                tmp = mid + 1;
                esc.push({ny, nx});
            }
        }
    }
    cout << "IMPOSSIBLE" << '\n';

    return 0;
}