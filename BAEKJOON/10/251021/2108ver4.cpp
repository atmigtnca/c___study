#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, all = 0, midNum;
    cin >> n;
    vector<int> mod(8001, 0);

    int in, minIdx = 4000, maxIdx = -4000;
    for (size_t i = 0; i < n; ++i)
    {
        cin >> in;
        all += in;
        ++mod[in + 4000];
        if (in < minIdx)
        {
            minIdx = in;
        }
        if (in > maxIdx)
        {
            maxIdx = in;
        }
    }
    minIdx += 4000, maxIdx += 4000;

    vector<int> modNum;
    modNum.reserve(maxIdx - minIdx + 1);

    int max = 0;
    for (size_t i = minIdx; i <= maxIdx; i++)
    {
        if (mod[i] > max)
        {
            max = mod[i];
        }
    }

    for (size_t i = minIdx; i <= maxIdx; i++)
    {
        if (mod[i] == max)
        {
            modNum.push_back(i - 4000);
        }
    }

    int midIdx = 0, tmpIdx = minIdx;
    while (true)
    {
        if (n == 1)
        {
            midNum = minIdx;
            break;
        }
        if (midIdx < (n / 2) + 1)
        {
            midIdx += mod[tmpIdx];
            if (midIdx >= (n / 2) + 1)
            {
                cout << 1 << ' ' << mod[tmpIdx] << '\n';
                ++tmpIdx;
                midNum = tmpIdx - 4000;
                break;
            }
        }
        ++tmpIdx;
    }

    int fr, se, th, fo;

    if (modNum.size() >= 2)
    {
        th = modNum[1];
    }
    else
    {
        th = modNum[0];
    }

    fr = round((double)all / n);
    se = midNum;
    fo = maxIdx - minIdx;

    cout << fr << '\n' << se << '\n' << th << '\n' << fo << '\n';

    return 0;
}