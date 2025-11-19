#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, L, R;
    int x, y = 1;
    cin >> a >> b >> c;
    cin >> L >> R;

    int rst = 0;
    for (size_t x = L; x <= R; x++)
    {
        for (size_t y = 1; y < 50000; y++)
        {
            int num = b * y - a * x;
            if (num <= c)
            {
                rst++;
            }
        }
    }

    cout << rst << '\n';

    return 0;
}
