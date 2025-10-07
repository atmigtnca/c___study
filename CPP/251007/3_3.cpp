#include <iostream>
using namespace std;

int main(void)
{
    int a = 5;
    int &b = a;

    cout << "a의 값 : " << a << endl;
    cout << "b의 값 : " << b << endl;
    cout << "a의 주소 : " << &a << endl;
    cout << "b의 주소 : " << &b << endl;

    b = 2;

    cout << "a의 값 : " << a << endl;
    cout << "b의 값 : " << b << endl;
    cout << "a의 주소 : " << &a << endl;
    cout << "b의 주소 : " << &b << endl;

    return 0;
}