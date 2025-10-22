#include <iostream>
using namespace std;
using ll = long long;

void todo(int n)
{
    for (size_t i = 1; i <= n; i++)
    {
        cout << '*';
    }
    cout << '\n';
}

void els(int n)
{
    for (size_t i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            cout << '*';
            continue;
        }
        cout << ' ';
    }
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    if (n == 1)
    {
        cout << '*' << '\n';
        return 0;
    }

    for (size_t i = 1; i <= n; ++i)
    {
        if (i == 1 || i == n)
        {
            todo(n);
            continue;
        }
        els(n);
    }

    return 0;
}