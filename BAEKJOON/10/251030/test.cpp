#include <iostream>
#include <string>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string iPt = "push 1";

    string ps = "push";
    if (iPt.compare(0, 4, ps) == 0)
    {
        iPt.erase(0, 5);
        ll it = stoll(iPt);
        cout << it << '\n';
    }

    return 0;
}