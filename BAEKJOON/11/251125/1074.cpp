#include <iostream>
using namespace std;
using ll = long long;
#define fasio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int N, r, c;

int fnc(int N, int r, int c)
{
    int half = 1 << (N - 1);
    if (N == 0)
    {
        return 0;
    }
}

int main()
{
    fasio;

    cin >> N >> r >> c;
    fnc(N, r, c);

    return 0;
}