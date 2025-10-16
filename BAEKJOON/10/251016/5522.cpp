#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll rst = 0;

    for (size_t i = 0; i < 5; i++)
    {
        ll n;
        cin >> n;
        rst += n;
    }

    cout << rst << '\n';

    return 0;
}