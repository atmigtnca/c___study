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
    vector<int> tower;
    tower.reserve(n + 1);
    tower.push_back(0);

    int rst = 0;
    for (size_t i = 1; i <= n; i++)
    {
        int ip, add = 0, curdx = i - 1, check = 0;
        cin >> ip;
        while (true)
        {
            if (curdx == 0)
            {
                break;
            }
            if (tower[curdx] < ip)
            {
                add++;
                check++;
                // cout << tower[curdx] << ' ' << add << ' ' << ip << '\n';
            }
            else if (tower[curdx] >= ip && check > 0)
            {
                rst += ++add;
                // cout << rst << ' ' << ip << '\n';
                break;
            }
            curdx--;
        }
        tower.push_back(ip);
    }
    cout << rst << '\n';

    return 0;
}