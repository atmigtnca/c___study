#include <iostream>
#include <string>
using namespace std;
using ll = long long;

int tripleSix(int num)
{
    int startNum = 665, count = 0;
    while (num != count)
    {
        startNum++;
        string str = to_string(startNum);
        size_t pos = str.rfind("666");
        if (pos != string::npos)
        {
            count++;
        }
    }
    return startNum;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;
    cout << tripleSix(num) << '\n';

    return 0;
}