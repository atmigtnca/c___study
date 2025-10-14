#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<pair<int, int>> xy;

    int n, x, y;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> x >> y;
        xy.push_back({x, y});
    }

    sort(xy.begin(), xy.end());

    for (auto &a : xy)
    {
        cout << a.first << ' ' << a.second << '\n';
    }

    return 0;
}