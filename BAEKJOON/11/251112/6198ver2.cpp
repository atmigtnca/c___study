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
    tower.reserve(n);

    for (size_t i = 0; i < n; i++)
    {
        int ip;
        cin >> ip;
        tower.push_back(ip);
    }

    // ll rst = 0;
    // for (size_t i = 0; i < tower.size() - 1; i++)
    // {
    //     ll srt = tower[i], add = 0;
    //     int count = i + 1;

    //     while (true)
    //     {
    //         if (tower[count] < srt)
    //         {
    //             add++;
    //         }
    //         if (tower[count] >= srt || count == tower.size() - 1)
    //         {
    //             rst += add;
    //             break;
    //         }
    //         count++;
    //     }
    // }

    // cout << rst << '\n';

    return 0;
}