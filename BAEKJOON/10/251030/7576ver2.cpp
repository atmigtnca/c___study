#include <bits/stdc++.h>
using namespace std;

int mapa[1002][1002];
int check[1002][1002];
int x, y, che, maxi, flag, count1, count2;
deque<pair<int, int> > nya;

void bfs(int a, int b, int cnt)
{
    if (check[a][b]) return;
    check[a][b] = 1;
    if (mapa[a][b] != 1) count2 += 1;
    if (maxi < mapa[a][b] - 1) maxi = mapa[a][b] - 1;
    nya.pop_front();

    //  cout << a << " " << b << "\n";
    if (mapa[a - 1][b] == 0 && a > 0)
    {
        mapa[a - 1][b] = cnt + 1;
        nya.push_back(make_pair(a - 1, b));
    }
    if (mapa[a + 1][b] == 0 && a < x - 1)
    {
        mapa[a + 1][b] = cnt + 1;
        nya.push_back(make_pair(a + 1, b));
    }
    if (mapa[a][b - 1] == 0 && b > 0)
    {
        mapa[a][b - 1] = cnt + 1;
        nya.push_back(make_pair(a, b - 1));
    }
    if (mapa[a][b + 1] == 0 && b < y - 1)
    {
        mapa[a][b + 1] = cnt + 1;
        nya.push_back(make_pair(a, b + 1));
    }

    while (!nya.empty())
    {
        bfs(nya[0].first, nya[0].second, mapa[nya[0].first][nya[0].second]);
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> x >> y;
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            int n;
            cin >> n;
            mapa[j][i] = n;
            if (n == 1)
            {
                nya.push_back(make_pair(j, i));
            }
            if (n == 0)
            {
                che = 1, count1 += 1;
            }
        }
    }

    bfs(nya[0].first, nya[0].second, mapa[nya[0].first][nya[0].second]);

    /*  for(int i=0; i<y; i++){
      for(int j=0; j<x; j++){
          cout << mapa[j][i] <<" ";
      }
      cout << "\n";
      }*/

    if (che == 0) maxi = 0;
    // cout << count1 << " " << count2 << "\n";
    if (count1 != count2) maxi = -1;
    cout << maxi;
}