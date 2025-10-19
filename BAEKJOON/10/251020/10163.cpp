#include <iostream>
#include <vector>
using namespace std;
#define SIZE 1001

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x, y, s, h;
    cin >> n;
    vector<int> col(n + 1, 0);
    vector<int> cek(SIZE * SIZE, 0);

    for (size_t i = 1; i <= n; ++i)
    {
        cin >> x >> y >> s >> h;
        for (size_t a = y; a < y + h; ++a)
        {
            for (size_t b = x; b < x + s; ++b)
            {
                int k = cek[(SIZE * a) + b];
                if (k != 0)
                {
                    --col[k];
                }
                ++col[i];
                cek[(SIZE * a) + b] = i;
            }
        }
    }

    for (size_t i = 1; i <= n; i++)
    {
        cout << col[i] << '\n';
    }

    return 0;
}