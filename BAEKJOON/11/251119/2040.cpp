#include <iostream>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    vector<int> wdr(N);
    vector<int> ptr(N, 0);
    int point = 1, rst = 0;

    for (size_t i = 0; i < N; i++)
    {
        cin >> wdr[i];

        if (wdr[i])
        {
            rst += 3;
            point = 1;
            continue;
        }
        else
        {
            if (point < 3)
            {
                rst += 3;
                point = 1;
                continue;
            }
            else
            {
                rst += point;
            }
        }
        if (point < 5)
        {
            point++;
        }
    }

    cout << rst << '\n';

    return 0;
}