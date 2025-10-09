#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<vector<string>> groups = {{"HTML", "CSS", "JavaScript"},
                                     {"C++", "Java", "Python", "GO"},
                                     {"SQL", "MongoDB"}};

    for (const auto &group : groups)
    {
        for (const auto &subject : group)
        {
            cout << subject << " ";
        }
        cout << "\n";
    }

    return 0;
}