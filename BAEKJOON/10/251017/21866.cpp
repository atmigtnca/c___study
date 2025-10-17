#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> lmt = {100, 100, 200, 200, 300, 300, 400, 400, 500};
    string rstd;
    int rst = 0, hac = 0;

    for (size_t i = 0; i < 9; i++)
    {
        int cof;
        cin >> cof;
        if (cof > lmt[i])
        {
            hac = 1;
        }
        rst += cof;
    }

    if (hac == 1)
    {
        rstd = "hacker";
    }
    else if (rst < 100)
    {
        rstd = "none";
    }
    else
    {
        rstd = "draw";
    }

    cout << rstd << '\n';

    return 0;
}