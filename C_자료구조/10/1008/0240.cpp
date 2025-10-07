#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string name;
    cout << "이름을 입력하세요 : ";
    getline(cin, name);
    cout << "입력된 이름 : " << name << endl;

    return 0;
}