#include <iostream>
using namespace std;

typedef int BOOL;

int main(void)
{
    BOOL bVar1;
    bool bVar2;

    bVar1 = (1 < 2) + (2 < 3);
    bVar2 = (1 < 2) + (2 < 3);

    cout << "bVar1 : " << bVar1 << endl;
    cout << "bVar2 : " << bVar2 << endl;

    return 0;
}