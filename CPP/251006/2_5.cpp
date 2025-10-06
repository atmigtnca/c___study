#include <iostream>
using namespace std;

int sum(int a, int b = 0, int c = 0, int d = 0, int e = 0)
{
    return a + b + c + d + e;
}

int main(void)
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << sum(a, b, c, d, e) << endl;

    return 0;
}