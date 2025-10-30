#include <array>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, n;
    cin >> m >> n;
    vector<vector<int>> toto(n + 2, vector<int>(m + 2, 0));
    queue<pair<int, int>> one;

    int zeroct = 0;

    for (size_t i = 1; i < n + 1; i++)
    {
        for (size_t j = 1; j < m + 1; j++)
        {
            cin >> toto[i][j];
            if (toto[i][j] == 0)
            {
                zeroct++;
            }
            else if (toto[i][j] == 1)
            {
                one.push({i, j});
            }
        }
    }

    if (zeroct == 0)
    {
        cout << 0 << '\n';
        return 0;
    }

    array<int, 4> xox = {-1, 1, 0, 0};
    array<int, 4> yoy = {0, 0, 1, -1};

    int day = 0;

    while (zeroct)
    {
        int rday = zeroct;

        int size = one.size();
        for (size_t c = 0; c < size; c++)
        {
            auto [ty, tx] = one.front();
            for (size_t i = 0; i < 4; i++)
            {
                int& srp = toto[ty + yoy[i]][tx + xox[i]];
                int x = tx + xox[i], y = ty + yoy[i];
                if (srp == 0)
                {
                    if (0 < y && y < n + 1 && 0 < x && x < m + 1)
                    {
                        srp++;
                        zeroct--;
                        one.push({y, x});
                    }
                    else
                    {
                        continue;
                    }
                }
            }
            one.pop();
        }

        if (rday == zeroct)
        {
            cout << -1 << '\n';
            return 0;
        }

        day++;
    }

    cout << day << '\n';

    return 0;
}