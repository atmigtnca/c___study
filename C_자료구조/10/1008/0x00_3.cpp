#include <iostream>
using namespace std;

int func3(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (i * i == n)
            return 1;
    }
    return 0;
}

int main(void)
{
    int n;
    cin >> n;
    cout << func3(n) << endl;

    return 0;
}