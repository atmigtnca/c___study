#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string name, age;

    cout << "당신의 이름은 무엇입니까? : ";
    cin >> name;

    cout << "당신의 나이는 몇살입니까? : ";
    cin >> age;

    cout << "당신의 이름은 : " << name << "\n"
         << "당신의 나이는 : " << age << "\n";

    return 0;
}