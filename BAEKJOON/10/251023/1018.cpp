#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using ll = long long;

void chg(string& chs, vector<int>& ces)
{
    int rst;
    for (size_t i = 0; i < chs.size(); i++)
    {
        if (chs[i] == 'B')
        {
            rst = 1;
        }
        else
        {
            rst = 0;
        }
        ces.push_back(rst);
    }
}

vector<int> one = {
    1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0,
    1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1,
    0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1,
};
vector<int> zero = {
    0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1,
    0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0,
    1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0,
};

void hol(vector<int>& ces, vector<int>& rst, int row, int m)
{
    int zeorst, onerst, col = 0, ckidx = 0;
    while (true)
    {
        zeorst = 0, onerst = 0;
        if (col + 8 > m)
        {
            break;
        }
        ckidx = 0;
        for (size_t i = 0; i < 8; i++)
        {
            for (size_t j = 0; j < 8; j++)
            {
                int gdx = (m * (i + row)) + col + j;
                if (ces[gdx] != one[ckidx])
                {
                    ++onerst;
                }
                if (ces[gdx] != zero[ckidx])
                {
                    ++zeorst;
                }
                // cout << "i= " << i << ' ' << "j= " << j << ' ' << "row= " <<
                // row
                //      << ' ' << "col= " << col << ' ' << "gdx= " << gdx << ' '
                //      << "onerst= " << onerst << ' ' << "zeorst= " << zeorst
                //      << '\n';
                ++ckidx;
            }
        }
        ++col;
        rst.push_back(onerst >= zeorst ? zeorst : onerst);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> ches;
    ches.reserve(n * m);

    string wb;
    for (size_t i = 0; i < n; i++)
    {
        cin >> wb;
        chg(wb, ches);
    }

    // for (size_t i = 0; i < n; i++)
    // {
    //     for (size_t j = 0; j < m; j++)
    //     {
    //         cout << ches[(m * i) + j] << ", ";
    //     }
    //     cout << '\n';
    // }

    int row = 0;
    vector<int> rst;
    rst.reserve((n - 7) * (m - 7));

    while (row + 8 <= n)
    {
        hol(ches, rst, row, m);
        ++row;
    }

    sort(rst.begin(), rst.end());

    // for (auto& mem : rst)
    // {
    //     cout << mem << '\n';
    // }

    cout << rst[0] << '\n';

    return 0;
}