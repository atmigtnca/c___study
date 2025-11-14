#include <iostream>
#include <queue>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    queue<int> tower;

    for (size_t i = 0; i < n; i++)
    {
        int ip;
        cin >> ip;
        tower.push(ip);
    }

    int rst = 0, add = 0;
    while (!tower.empty())
    {
        int srt = tower.front();
        tower.pop();

        cout << srt << '\n';
        while (!tower.empty())
        {
            int ele = tower.front();
            tower.pop();
            if (ele < srt)
            {
                cout << ele << "=====" << '\n';
                add++;
            }
            else if (ele >= srt)
            {
                rst += add;
                cout << rst << ' ' << "----" << '\n';
                break;
            }
        }
    }

    cout << rst << '\n';

    return 0;
}