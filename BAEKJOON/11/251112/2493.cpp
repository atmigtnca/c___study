#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> tp;
    tp.reserve(n);
    vector<int> rst(n);

    for (size_t i = 0; i < n; i++)
    {
        int ip;
        cin >> ip;
        tp.push_back(ip);

        for (int j = tp.size() - 1; j >= 0; j--)
        {
            if (j == i)
            {
                continue;
            }
            if (tp[j] >= tp[i])
            {
                // cout << tp[j] << ' ' << j + 1 << '\n';
                rst[i] = j + 1;
                break;
            }
        }
    }

    for (auto mem : rst)
    {
        cout << mem << ' ';
    }
    cout << '\n';

    return 0;
}