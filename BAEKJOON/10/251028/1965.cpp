#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;

int bigBox(vector<int>& boxs, int i)
{
    if (boxs.size() == 1)
    {
        return 1;
    }

    int count = 1, sz = boxs.size();

    for (size_t a = i; a <= sz - 2;)
    {
        int num = boxs[a];
        pair<int, int> mAx{1000, 0};

        for (size_t b = a + 1; b < sz; b++)
        {
            if (boxs[b] < mAx.first)
            {
                mAx = {boxs[b], b};
                cout << 1 << ' ' << boxs[a] << ' ' << a << '\n';
            }
        }
        a = mAx.second;
        count++;
        cout << 2 << ' ' << boxs[a] << ' ' << a << '\n';
    }

    return count;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> boxs(n);

    for (auto& box : boxs)
    {
        cin >> box;
    }

    int mAx = 0;
    for (size_t i = 0; i < n; i++)
    {
        mAx = max(mAx, bigBox(boxs, i));
    }

    cout << mAx << '\n';

    return 0;
}