#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> tp;
    tp.reserve(n);

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
                cout << j + 1 << ' ';
                break;
            }
            if (j == 0)
            {
                cout << 0 << ' ';
            }
        }
    }

    return 0;
}