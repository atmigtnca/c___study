#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string tr;
    cin >> tr;
    long long in = 0, rst = 0;

    for (size_t i = 0; i < tr.size() - 1; ++i)
    {
        if (tr[i] == '(' && tr[i + 1] == ')')
        {
            rst += in;
            i += 1;
            continue;
        }
        in += (tr[i] == '(' ? 1 : -1);
    }

    cout << rst << "\n";

    return 0;
}