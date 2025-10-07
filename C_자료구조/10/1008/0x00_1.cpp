#include <iostream>
using namespace std;

int func1(int n)
{
    int sum = 0;
    for (int i = n; i > 0; i--)
    {
        int t = i % 3;
        int f = i % 5;
        if (t == 0 || f == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main(void)
{
    int n;
    cin >> n;
    cout << func1(n) << endl;

    return 0;
}
