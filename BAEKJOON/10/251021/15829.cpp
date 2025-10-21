#include <iostream>
#include <string>
using namespace std;
using ll = long long;
const int MOD = 1234567891;

ll rmd(ll a, ll b) { return (a * b) % MOD; }
ll adi(ll a, ll b) { return (a + b) % MOD; }

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;

    string hsg;
    cin >> hsg;

    ll mtp = 1, rst = 0;
    for (size_t i = 0; i < hsg.size(); i++)
    {
        ll ap = hsg[i] - 'a' + 1;
        rst = adi(rst, rmd(ap, mtp));
        mtp = rmd(mtp, 31);
    }

    cout << rst << '\n';

    return 0;
}