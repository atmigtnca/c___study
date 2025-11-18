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

    int row, col;
    cin >> row >> col;

    vector<vector<int>> vist(row, vector<int>(col, -1));  // 불난시간
    vector<vector<int>> time(row, vector<int>(col, -1));  // 탈출하는시간

    queue<pair<int, int>> fire;  // 불난위치
    queue<pair<int, int>> jh;    // 지훈이의 위치

    vector<string> ipt(row);
    for (size_t i = 0; i < row; i++)
    {
        cin >> ipt[i];
        for (size_t j = 0; j < col; j++)
        {
            char tmp = ipt[i][j];
            if (tmp == 'J')  // 지훈이 위치 표시
            {
                jh.push({i, j});
            }
            else if (tmp == 'F')  // 불난위치표시
            {
                fire.push({i, j});
                vist[i][j] = 0;
            }
        }
    }

    while (!fire.empty())  // 불이 난 시간 체크
    {
        // queue<pair<int, int>> cur;
        // cur.push(fire.front()), fire.pop();      // 불이난위치
        // vist[cur.front().Y][cur.front().X] = 0;  // 시간체크

        // while (!cur.empty())
        // {

        auto spt = fire.front();
        fire.pop();

        for (size_t i = 0; i < 4; i++)
        {
            int ny = spt.Y + dy[i], nx = spt.X + dx[i];
            if (ny < 0 || ny >= row || nx < 0 || nx >= col)
            {
                continue;
            }
            if (ipt[ny][nx] == '#' || vist[ny][nx] != -1)
            {
                continue;
            }
            vist[ny][nx] = vist[spt.Y][spt.X] + 1;
            fire.push({ny, nx});

            // if ((ny < 0 || ny >= row || nx < 0 || nx >= col) ||
            //     (vist[ny][nx] != -1 && vist[spt.Y][spt.X] + 1 >
            //     vist[ny][nx]))
            // {
            //     continue;
            // }
            // if (ipt[ny][nx] != '#')
            // {
            //     fire.push({ny, nx});
            //     vist[ny][nx] = vist[spt.Y][spt.X] + 1;
            // }
            // }
        }
    }

    // for (size_t i = 0; i < row; i++)
    // {
    //     for (size_t j = 0; j < col; j++)
    //     {
    //         cout << vist[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }

    queue<pair<int, int>> esc;
    esc.push(jh.front());
    time[esc.front().Y][esc.front().X] = 0;

    int rst;
    while (!esc.empty())
    {
        auto spt = esc.front();
        esc.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = spt.Y + dy[i], nx = spt.X + dx[i];
            if (ny < 0 | ny >= row || nx < 0 || nx >= col)
            {
                rst = time[spt.Y][spt.X] + 1;
                cout << rst << '\n';
                return 0;
            }

            if ((vist[ny][nx] > time[spt.Y][spt.X] + 1 || vist[ny][nx] == -1) &&
                (time[ny][nx] == -1 && ipt[ny][nx] != '#'))
            {
                time[ny][nx] = time[spt.Y][spt.X] + 1;
                esc.push({ny, nx});
            }

            // for (size_t i = 0; i < row; i++)
            // {
            //     for (size_t j = 0; j < col; j++)
            //     {
            //         cout << time[i][j] << ' ';
            //     }
            //     cout << '\n';
            // }
            // cout << '\n';
        }
    }
    cout << "IMPOSSIBLE" << '\n';

    return 0;
}