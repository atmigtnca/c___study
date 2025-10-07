#include <iostream>
using namespace std;

int func4(int N)
{
    int Val = 1;
    while (2 * Val <= N)
    {
        Val *= 2;
    }
    return Val;
}

int main(void)
{
    int n;
    cin >> n;
    cout << "func4(" << n << ") = " << func4(n) << endl;

    return 0;
}