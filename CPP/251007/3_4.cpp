#include <iostream>
using namespace std;

void update(int var1, int &var2)
{
    var1 += var1;
    var2 += var2;
}

int main(void)
{
    int a = 1, b = 1;

    for (int i = 0; i < 5; i++)
    {
        update(a, b);
    }

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}