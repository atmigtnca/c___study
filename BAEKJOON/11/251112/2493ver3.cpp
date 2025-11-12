#include <iostream>
#include <stack>
#include <utility>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    stack<pair<int, int>> base;

    int n;
    cin >> n;

    int input;
    for (size_t i = 0; i < n; i++)
    {
        cin >> input;

        while (!base.empty())
        {
            if (base.top().first > input)
            {
                cout << base.top().second + 1 << ' ';
                break;
            }
            base.pop();
        }
        if (base.size() == 0)
        {
            cout << 0 << ' ';
        }
        base.push({input, i});
    }
    cout << '\n';

    return 0;
}