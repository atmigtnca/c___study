#include <iostream>
using namespace std;

int main(void)
{
    int iVar;
    double dVar;
    char str[20];

    cout << "int, double, 문자열 입력 : ";
    cin >> iVar >> dVar;
    cin >> str;

    cout << "int 값" << iVar << endl;
    cout << "double 값" << dVar << endl;
    cout << "문자열 값" << str << endl;

    return 0;
}