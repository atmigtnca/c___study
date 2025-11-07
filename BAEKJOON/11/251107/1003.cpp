#include <array>
#include <iostream>
using namespace std;
using ll = long long;

int fibonacci(int n)
{
    if (n == 0)
    {
        cout << 0 << '\n';
        return 0;
    }
    else if (n == 1)
    {
        cout << 1 << '\n';
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int count;
    cin >> count;

    for (size_t i = 0; i < count; i++)
    {
        int a;
        cin >> a;
        if (a == 0)
        {
            cout << 1 << ' ' << 0 << '\n';
            continue;
        }
        array<int, 2> basket{};
        int val = 0;
        while (true)
        {
            val = fibonacci(a);
            if (val > 1)
            {
                break;
            }
            basket[val]++;
        }
        cout << basket[0] << ' ' << basket[1] << '\n';
    }

    return 0;
}