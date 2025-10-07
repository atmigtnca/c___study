#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    string s = "ABCDE123";

    s.insert(0, "TEST");
    s.insert(s.begin() + s.find_first_of('D') + 1, ':');

        return 0;
}