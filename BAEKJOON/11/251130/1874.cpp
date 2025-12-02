#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    queue<int> memo;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        memo.push(a);
    }

    stack<int> sid;
    vector<char> rst;
    rst.reserve(2 * n);
    for (int i = 1; i <= n; i++)
    {
        int tmp = memo.front();
        if (tmp != i)
        {
            sid.push(i);
            rst.push_back('+');
        }
        else if (tmp == i)
        {
                }
    }

    return 0;
}