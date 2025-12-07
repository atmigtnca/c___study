#include <iostream>
#include <string>
using namespace std;
using ll = long long;
int tme[2][3];

void fnc(int d)
{
    string ipt;
    cin >> ipt;

    string tmp = "";
    int cur = 0;
    for (int i = 0; i < 8; i++)
    {
        tmp += ipt[i];
        if (tmp.size() == 2)
        {
            tme[d][cur] = stoi(tmp);
            i += 1;
            cur++;
            tmp = "";
        }
    }
}

int rstfnc()
{
    int t;
    double k;
    cin >> t >> k;
    t *= (1 - (k / 100));
    int hmod = t % 3600;

    tme[0][0] += t / 3600;
    tme[0][1] += hmod / 60;
    tme[0][2] += hmod % 60;

    if (tme[0][2] >= 60)
    {
        tme[0][1] += 1;
        tme[0][2] = tme[0][2] % 60;
    }

    if (tme[0][1] >= 60)
    {
        tme[0][0] += 1;
        tme[0][1] = tme[0][1] % 60;
    }

    if (tme[0][0] > 23)
    {
        return 0;
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << tme[i][j] << ' ';
        }
        cout << '\n';
    }

    

    for (int i = 0; i < 3; i++)
    {
        if (tme[0][i] > tme[1][i])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    fnc(0);
    fnc(1);

    cout << rstfnc() << '\n';

    return 0;
}