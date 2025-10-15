#include <iostream>
#include <vector>
using namespace std;

void ien(int idx, int rst, vector<int> &yb)
{
    if (idx > yb.size())
    {
        yb.resize(idx + 5);
    }

    int t = rst / 100, tp = rst - (t * 100), f = tp % 10, s = tp / 10;
    if (t != 0)
    {
        yb[idx + 2] += t;
        if (yb[idx + 2] >= 10)
        {
            yb[idx + 3] += yb[idx + 2] / 10;
            yb[idx + 2] = yb[idx + 2] % 10;
        }
    }
    if (s != 0)
    {
        yb[idx + 1] += s;
        if (yb[idx + 1] >= 10)
        {
            yb[idx + 2] += yb[idx + 1] / 10;
            yb[idx + 1] = yb[idx + 1] % 10;
        }
    }
    yb[idx] += f;
    if (yb[idx] >= 10)
    {
        yb[idx + 1] += yb[idx] / 10;
        yb[idx] = yb[idx] % 10;
    }
}

void cut(int i, vector<int> &yb)
{
    int max = yb.size(), rst;
    for (size_t z = 0; z < max; ++z)
    {
        rst = i * yb[z];
        ien(z, rst, yb);
        for (const auto &zero : yb)
        {
            cout << zero;
        }
        cout << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 1 << '\n';
        return 0;
    }

    vector<int> bigb(15);
    bigb[0] = 1;

    for (size_t i = 1; i <= n; ++i)
    {
        cut(i, bigb);
    }

    int rst = 0;

    for (const auto &zero : bigb)
    {
        cout << zero;
    }
    cout << '\n';

    // cout << rst << '\n';

    return 0;
}