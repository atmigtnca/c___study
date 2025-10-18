#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> lst(n), rlst;
    rlst.reserve(n * 2);
    stack<int> mot;

    for (size_t i = 0; i < n; i++)
    {
        cin >> lst[i];
    }

    int cut = n, sts = 1, idx = 0;

    while (cut)
    {
        if (idx == n)
        {
            break;
        }

        // if (mot.top() == lst[idx])
        // {
        //     mot.pop();
        //     rlst.push_back(0);
        //     ++idx;
        //     --cut;
        // }
        // else
        if (sts != lst[idx])
        {
            mot.push(sts);
            rlst.push_back(1);
            ++sts;
        }
        else if (sts == lst[idx])
        {
            rlst.push_back(1);
            rlst.push_back(0);
            ++idx;
            --cut;
        }
    }

    for (auto& mem : rlst)
    {
        cout << mem << '\n';
    }

    return 0;
}