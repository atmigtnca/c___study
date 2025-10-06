#include <iostream>
using namespace std;

typedef int BOOL;

int main(void)
{
    BOOL bVar1 = 3;
    bool bVar2 = 3;

    cout << "bVar1 : " << bVar1 << endl;
    cout << "bvar2 : " << bVar2 << endl;

    int a = bVar1 + 2;
    int b = bVar2 + 2;

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    return 0;
}