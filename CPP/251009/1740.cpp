#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector<string> fruits = {"apple", "banana", "cherry"};

    fruits.push_back("orange");

    cout << fruits[3] << "\n\n";

    for (const string &fruit : fruits)
    {
        cout << fruit << "\n";
    }

    return 0;
}