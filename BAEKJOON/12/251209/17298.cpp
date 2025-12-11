#include <iostream>
#include <stack>
#include <vector>
using namespace std;
using ll = long long;
vector<int> aray;
int N;

int ngefnc(int a) {}

void iptfnc()
{
    cin >> N;

    aray.resize(N);
    for (int i = 0; i < N; i++)
    {
        cin >> aray[i];
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    iptfnc();

    return 0;
}