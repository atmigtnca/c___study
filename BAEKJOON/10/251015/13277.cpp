#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a, b;
    cin >> a >> b;

    if (a[0] == '0' || b[0] == '0')
    {
        cout << 0 << '\n';
        return 0;
    }

    int len = a.size() + b.size(), idx;

    vector<int> bigb(len, 0);

    for (size_t j = 0; j < b.size(); ++j)
    {
        int na = b[b.size() - j - 1] - '0';
        idx = len - 1 - j;
        for (size_t i = 0; i < a.size(); i++)
        {
            int an = a[a.size() - i - 1] - '0';
            int rs = an * na;

            bigb[idx] += rs % 10;
            if (bigb[idx] >= 10)
            {
                bigb[idx - 1] += bigb[idx] / 10;
                bigb[idx] = bigb[idx] % 10;
            }

            bigb[idx - 1] += rs / 10;
            --idx;
        }
    }

    if (bigb[0] == 0)
    {
        bigb.erase(bigb.begin());
    }

    for (const auto &num : bigb)
    {
        cout << num;
    }
    cout << '\n';

    return 0;
}