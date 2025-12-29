#include <algorithm>
#include <iostream>
using namespace std;
using ll = long long;
int dp[3][333];
int ipt[333];

void fnc()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> ipt[i];
    }

    dp[1][1] = ipt[1], dp[2][1] = 0;
    dp[1][2] = ipt[2], dp[2][2] = ipt[1] + ipt[2];

    for (int i = 1; i <= n; i++)
    {
        dp[1][i] = max(dp[1][i - 2], dp[2][i - 2]) + ipt[i];
        dp[2][i] = dp[1][i - 1] + ipt[i];
    }
    cout << max(dp[1][n], dp[2][n]) << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    fnc();

    return 0;
}