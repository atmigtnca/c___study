#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
ll rst = 1;

void fnc(ll n)
{
    if (n == 0)
    {
        rst *= 1;
        return;
    }
    rst *= n;
    fnc(n - 1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;
    fnc(n);
    cout << rst << '\n';

    return 0;
}