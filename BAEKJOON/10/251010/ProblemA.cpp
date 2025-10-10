#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int matrix[2][n][n];

    for (size_t h = 0; h < 2; ++h)
    {
        for (size_t i = 0; i < n; ++i)
        {
            for (size_t j = 0; j < n; ++j)
            {
                cin >> matrix[h][i][j];
            }
        }
    }

    long long rst = 0;
    for (size_t i = 0; i < m; ++i)
    {
        int M, max = 0;
        cin >> M;
        for (size_t j = 0; j < n; ++j)
        {
            int jr = matrix[0][j][M - 1] - matrix[1][j][M - 1];
            int b = (jr > 0 ? jr : -jr);
            if (b > max)
            {
                max = b;
            }
        }
        rst += max;
    }

    cout << rst << "\n";

    return 0;
}