#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
vector<vector<int>> grp;
vector<vector<int>> dangrp;
int cut[10001];
int N, M;

void fndfnc()
{
    for (int i = 1; i <= N; i++)
    {
        
    }
}

void iptfnc()
{
    cin >> N >> M;
    grp.resize(N + 1);
    dangrp.resize(N + 1);

    while (M--)
    {
        int a, b;
        cin >> a >> b;
        grp[a].push_back(b);
        dangrp[b].push_back(a);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    iptfnc();
    fndfnc();

    return 0;
}