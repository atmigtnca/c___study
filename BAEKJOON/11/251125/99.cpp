#include <iostream>
using namespace std;
using ll = long long;

void gugu(int F, int E)
{
    if (F == 1 && E == 1)
    {
        return;
    }
    else if (E == 0)
    {
        E = 9, F--;
    }
    gugu(F, E - 1);
    if (E == 1)
    {
        cout << '\n';
    }

    cout << F << " * " << E << " = " << F * E << " ";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int N;
    cin >> N;

    gugu(N, 9);
    cout << '\n';

    return 0;
}