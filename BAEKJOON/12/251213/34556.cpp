#include <iostream>
#include <string>
#include <vector>
using namespace std;
using ll = long long;
vector<string> mle;
vector<string> fle;
int N;

void iptfnc()
{
    cin >> N;
    mle.resize(N);
    fle.resize(N);

    for (int i = 0; i < N; i++)
    {
        cin >> mle[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> fle[i];
    }
}

int cmpfnc(int M, int F)
{
    int rst = 0;
    for (int i = 0; i < 4; i++)
    {
        if (mle[M][i] != fle[F][i])
        {
            rst++;
        }
    }
    return rst;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    iptfnc();

    return 0;
}