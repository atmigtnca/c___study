#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

int main(void)
{
    int a = 3, b = 4;
    swap(a, b);

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    return 0;
}