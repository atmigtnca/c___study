#include <algorithm>
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
    vector<int> box(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> box[i];
    }

    stable_sort(box.begin(), box.end());

    for (auto& mem : box)
    {
        cout << mem << ' ';
    }

    cout << '\n';

    return 0;
}