#include <iostream>
using namespace std;

inline int Abs(int x)
{
    return (x > 0 ? x : -x);
}

int main(void)
{
    cout << "Abs(-4 + 2) = " << Abs(-4 + 2) << endl;

    return 0;
}