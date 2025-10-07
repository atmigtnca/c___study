#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    string s = "SeoJongHo123";

    cout << s.at(3) << endl;
    cout << s[3] << endl;
    cout << s.front() << endl;
    cout << s.back() << endl;

    const char *c = s.c_str();

    cout << c << endl;

    return 0;
}