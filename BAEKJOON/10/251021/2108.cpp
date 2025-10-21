#include <algorithm>
#include <cmath>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, all = 0;
    cin >> n;
    vector<ll> nums(n);
    vector<pair<ll, ll>> mod;
    mod.reserve(n);

    for (size_t i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
        all += nums[i];
    }

    sort(nums.begin(), nums.end());

    ll a, ct = 0;
    for (size_t i = 0; i < nums.size(); i++)
    {
        a = nums[i];
        ++ct;
        if (nums[i] != nums[i + 1] || i == nums.size() - 1)
        {
            mod.push_back({a, ct});
            ct = 0;
        }
    }

    sort(mod.begin(), mod.end(),
         [](const auto& a, const auto& b) { return a.second < b.second; });

    // for (const auto& mo : mod)
    // {
    //     cout << "\n\n" << mo.first << ' ' << mo.second << "\n\n";
    // }

    ll maxIdx = mod.size() - 1, th = -1;

    auto it = find_if(mod.begin(), mod.end(), [&](const auto& p)
                      { return p.first == mod[maxIdx].first; });

    // cout << it->first << "\n\n";

    // if (it->second == 1)
    // {
    //     th =
    // }

    if (it != mod.end() - 1)
    {
        ++it;
    }
    th = it->first;

    ll fr = round((double)all / n);
    ll se = nums[(n / 2)];
    ll fo = nums[n - 1] - nums[0];

    cout << fr << '\n' << se << '\n' << th << '\n' << fo << '\n';

    return 0;
}