#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, n;
    cin >> m >> n;

    vector<bool> sou(n + 1, true);
    sou[1] = false;

    int sq = sqrt(n);
    for (int i = 2; i <= sq; i++)
    {
        if (!sou[i])
        {
            continue;
        }
        for (int j = i * i; j <= n; j += i)
        {
            sou[j] = false;
        }
    }

    for (size_t i = m; i <= n; i++)
    {
        if (sou[i])
        {
            cout << i << '\n';
        }
    }

    return 0;
}