#include <iostream>
#include <string>
using namespace std;

void addNum1(int a, int b)
{
    cout << a << " + " << b << " = " << a + b << endl;
}

void addNum2(int a, int b = 99)
{
    cout << a << " + " << b << " = " << a + b << endl;
}

void addNum3(int a = 1, int b = 99)
{
    cout << a << " + " << b << " = " << a + b << endl;
}

int main(void)
{
    cout << "1. addNum1(int a, int b)" << endl;

    cout << "addNum1(10, 20) : ";
    addNum1(10, 20);

    cout << endl
         << "2. addNum1(int a, int b = 99)" << endl;

    cout << "addNum2(10) : ";
    addNum2(10);

    cout << "addNum2(10, 20) : ";
    addNum2(10, 20);

    cout << endl
         << "3. addNum1(int a = 1, int b = 99)" << endl;
    cout << "addNum3() : ";
    addNum3();

    cout << "addNum3(10) : ";
    addNum3(10);

    cout << "addNum(10, 20) : ";
    addNum3(10, 20);

    return 0;
}