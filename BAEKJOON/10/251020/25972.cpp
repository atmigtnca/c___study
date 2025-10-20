#include <iostream>
#include <utility>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int, int>> dom;
    dom.reserve(n);

    int fst, end;
    for (size_t i = 0; i < n; i++)
    {
        cin >> fst >> end;
        for (size_t i = 0; i < dom.size(); i++)
        {
        }

        dom.push_back({fst, fst + end});
    }

    return 0;
}