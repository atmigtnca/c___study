#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
    vector<vector<string>> groups;

    groups.push_back({"HTML", "CSS", "JavaScript"});
    groups.push_back({"C++", "Java", "Python", "GO"});
    groups.push_back({"SQL", "MongoDB"});

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