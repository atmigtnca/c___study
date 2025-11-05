#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    if (n < 10)
    {
        cout << n << '\n';
        return 0;
    }

    int rst = 0, cut = 9, div = 100000000;

    while (n != 0)
    {
        if (n > 0 && n < 100)
        {
            int fst = n / 10;
            int scd = n % 10;
        }

        int a = n / div;
        if (a)
        {
            rst += a * cut * div;
            n -= a * div;
        }
        cut--, div /= 10;
    }

    cout << rst << '\n';

    return 0;
}