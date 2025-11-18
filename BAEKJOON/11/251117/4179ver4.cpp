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

    vector<vector<int>> world(row, vector<int>(col, -1));
    vector<vector<int>> vis(row, vector<int>(col, -1));

    pair<int, int> jh;
    queue<pair<int, int>> fire;
    vector<string> ipt(row);

    for (size_t i = 0; i < row; i++)
    {
        cin >> ipt[i];
        for (size_t j = 0; j < col; j++)
        {
            if (ipt[i][j] == 'J')
            {
                jh = {i, j};
            }
            else if (ipt[i][j] == 'F')
            {
                fire.push({i, j});
                vis[i][j] = 0;
            }
        }
    }

    while (!fire.empty())
    {
        queue<pair<int, int>> cur;
        cur.push(fire.front());
        fire.pop();

        while (!cur.empty())
        {
            auto spt = cur.front();
            cur.pop();
            world[spt.Y][spt.X] = 0;
            for (size_t i = 0; i < 4; i++)
            {
                int ny = spt.Y + dy[i];
                int nx = spt.X + dx[i];
                if ((ny < 0 || ny >= row || nx < 0 || nx >= col) ||
                    (world[ny][nx] < world[spt.Y][spt.X] + 1 &&
                     vis[ny][nx] == 0))
                {
                    cout << 1111 << '\n';
                    continue;
                }
                if (ipt[ny][nx] != '#' && vis[ny][nx] == 0)
                {
                    cout << 111 << '\n';
                    cur.push({ny, nx});
                    world[ny][nx] = world[spt.Y][spt.X] + 1;
                    vis[ny][nx] = 0;
                }
            }
        }
    }

    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << world[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}