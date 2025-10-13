#include <algorithm>
#include <iostream>
#define div(a, b) a / b
#define rmd(a, b) a % b
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, cut1 = 0, cut2 = 0;
    cin >> n;

    int thr1 = rmd(n, 5);
    cut1 += div(n, 5) + div(thr1, 3);
    thr1 = rmd(thr1, 3);

    bool rst1(thr1 == 0);

    int thr2 = rmd(n, 3);
    cut2 += div(n, 3) + div(thr2, 5);
    thr2 = rmd(thr2, 5);

    bool rst2(thr2 == 0);

    // cout << rst1 << ' ' << rst2 << '\n';

    if (rst1 == true && rst2 == true)
    {
        cout << min(cut1, cut2) << '\n';
    }
    else if (rst2 == true)
    {
        cout << cut2 << '\n';
    }
    else if (rst1 == true)
    {
        cout << cut1 << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }

    return 0;
}