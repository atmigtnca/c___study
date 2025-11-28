#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
vector<vector<char>> tri;

void drw(int y, int x)
{
    tri[y][x] = '*';
    tri[y + 1][x + 1] = '*';
    tri[y + 1][x - 1] = '*';
    for (int i = 0; i < 5; i++)
    {
        tri[y + 2][x - 2 + i] = '*';
    }
}

void fnc(int N, int y, int x)
{
    if (N == 3)
    {
        drw(y, x);
        return;
    }
    int C = N / 2;
    fnc(C, y + C, x - C);
    fnc(C, y + C, x + C);
    fnc(C, y, x);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int N;
    cin >> N;
    tri.resize(N, vector<char>(2 * N - 1, ' '));

    fnc(N, 0, N - 1);

    for (auto mems : tri)
    {
        for (auto mem : mems)
        {
            cout << mem;
        }
        cout << '\n';
    }

    return 0;
}