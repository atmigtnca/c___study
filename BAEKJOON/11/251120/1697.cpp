#include <iostream>
#include <queue>
#include <vector>
using namespace std;
using ll = long long;

int n, k, sec, rst = 0, go, back, tlpt, spt;
bool check = 0;
int vis[100000];
vector<bool> vis(100001, 1);
queue<int> cur;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;

    if (n == k)
    {
        cout << 0 << '\n';
        return 0;
    }

    cur.push(n);
    vis[n] = 0;

    while (!cur.empty())
    {
        rst++;
        size_t mem = cur.size();
        while (mem--)
        {
            spt = cur.front();
            cur.pop();
            go = spt + 1;
            back = spt - 1;
            tlpt = spt * 2;

            if (go <= 100000)
            {
                // cout << go << " <-go ";
                if (vis[go] == 1)
                {
                    if (go == k)
                    {
                        check = 1;
                        break;
                    }
                    else
                    {
                        cur.push(go);
                        vis[go] = 0;
                    }
                }
            }
            if (back >= 0)
            {
                // cout << back << " <-back ";
                if (vis[back] == 1)
                {
                    if (back == k)
                    {
                        check = 1;
                        break;
                    }
                    else
                    {
                        cur.push(back);
                        vis[back] = 0;
                    }
                }
            }
            if (tlpt <= 100000)
            {
                // cout << tlpt << " <-tlpt ";
                if (vis[tlpt] == 1)
                {
                    if (tlpt == k)
                    {
                        check = 1;
                        break;
                    }
                    else
                    {
                        cur.push(tlpt);
                        vis[tlpt] = 0;
                    }
                }
            }
            // cout << '\n';
        }
        if (check)
        {
            cout << rst << '\n';
            return 0;
        }
    }

    return 0;
}