#include <iostream>
using ll = long long;
using namespace std;

int onerst(int eno)
{
    ll cir = 1, ele = 1;
    int i = 1;

    if (eno == 1)
    {
        return 1;
    }

    while (cir != 0)
    {
        ele = (ele * 10) % eno;
        cir = (cir + ele) % eno;
        i++;
    }

    return i;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int one;
    while (cin >> one)
    {
        cout << onerst(one) << '\n';
    }

    return 0;
}