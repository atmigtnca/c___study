#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int UOS[3], min_ele = 1e9, min_idx;
    for (int i = 0; i < 3; i++)
    {
        cin >> UOS[i];
        if (UOS[i] < min_ele)
        {
            min_ele = UOS[i];
            min_idx = i;
        }
    }

    if (min_idx == 1)
    {
        cout << min_ele << '\n';
        return 0;
    }

    for (auto mem : UOS)
    {
        mem -= min_ele;
        cout << mem << ' ';
    }
    cout << '\n';

    while (1)
    {
        if (UOS[0] >= 3 && UOS[1] >= 1 && UOS[2] == 0)
        {
            cout << "hello\n";
            UOS[0] -= 3;
            UOS[1] -= 1;
            min_ele++;
        }
        if (UOS[0] <= 2)
        {
            break;
        }
    }

    cout << min_ele << '\n';

    return 0;
}