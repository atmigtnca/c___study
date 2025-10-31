#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string h;
    cin >> h;

    if (h == "1")
    {
        cout << 2 << '\n';
    }
    else
    {
        cout << 1 << '\n';
    }

    return 0;
}