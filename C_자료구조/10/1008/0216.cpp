#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    string s = "Example";
    string::iterator it = s.begin();
    while (it != s.end())
    {
        cout << *it;
        ++it;
    }

    cout << endl;

    return 0;
}