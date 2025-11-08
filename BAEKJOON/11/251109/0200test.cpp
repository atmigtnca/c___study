#include <iostream>
#include <list>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    list<int> lt;
    lt.push_back(2);
    lt.push_front(1);
    lt.push_front(3);
    lt.push_back(4);

    auto iter = lt.begin();
    cout << *iter << '\n';
    lt.insert(iter, 123);
    auto itr = lt.end();
    cout << *itr << '\n';
    itr--;
    lt.erase(itr);

    cout << lt.size() << '\n';

    for (auto& mem : lt)
    {
        cout << mem << '\n';
    }

    return 0;
}