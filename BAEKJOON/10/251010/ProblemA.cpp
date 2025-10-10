#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, rst = 0;
    cin >> n >> m;

    int ch[n][n][n], chan[m];

    for (size_t h = 0; h < 2; h++)
    {
        for (size_t j = 0; j < n; j++)
        {
            for (size_t i = 0; i < n; i++)
            {
                cin >> ch[h][j][i];
            }
        }
    }

    for (size_t i = 0; i < m; i++)
    {
        cin >> chan[i];
    }

    for (size_t i = 0; i < m; i++)
    {
        int MAX = 0;
        for (int j = 0; j < n; j++)
        {
            int yy = chan[i];
            int jr = ch[1][j][yy] - ch[2][j][yy];
            int b = (jr > 0 ? jr : -jr);

            if (b > MAX)
            {
                MAX = b;
            }
        }
        rst += MAX;
    }

    cout << rst << "\n";

    return 0;
}