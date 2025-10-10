#include <iostream>
#include <vector>
using namespace std;

struct turt
{
    int srt;
    int end;
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, max = 1;
    vector<bool> lod(1);
    cin >> n >> k;

    turt seq[n + 1];

    for (size_t i = 0; i < n; i++)
    {
        int l, f;
        cin >> l >> f;
        if (f > max)
        {
            max = f;
            lod.resize(max + 1);
        }
        for (size_t j = l; j <= f; j++)
        {
            if (lod[j] != true)
            {
                lod[j] = true;
            }
        }
        seq[i + 1].srt = l;
        seq[i + 1].end = f;
    }

    int xeq[k], nw = 0, nxt;

    for (size_t i = 0; i < k; i++)
    {
        int n;
        cin >> n;
        xeq[i] = n;

        for (size_t i = nw; i < ; i++)
        {
        }
    }

    return 0;
}