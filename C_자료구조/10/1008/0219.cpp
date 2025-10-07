#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    string s = "ABCDE123";

    cout << s.length() << endl;
    cout << s.size() << endl;
    cout << s.capacity() << endl;

    s.reserve(100);
    cout << s.size() << endl;
    cout << s.capacity() << endl;

    s.shrink_to_fit();
    cout << s.capacity() << endl;

    return 0;
}