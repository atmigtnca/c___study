#include <iostream>
#include <list>
#include <string>
using namespace std;
using ll = long long;

bool check(list<int>& lst)
{
    bool stb = true;
    auto cur = lst.end();

    int cut = 0;
    while (!lst.empty())
    {
        while (!lst.empty())
        {
            int left = *cur;
            int right = *(++cur);
            if ((left == 1 && right == 2) || (left == 3 && right == 4))
            {
                // cout << left << ' ' << right << '\n';
                cut++;
                cur--;
                cur = lst.erase(cur);
                cur = lst.erase(cur);
            }
            // for (auto mem : lst)
            // {
            //     cout << mem << ' ';
            // }
            // cout << '\n';

            if (cur == lst.end())
            {
                break;
            }
        }
        if (cut)
        {
            stb = false;
            break;
        }
    }
    return stb;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string stb;
    while (true)
    {
        getline(cin, stb);
        if (stb == ".")
        {
            break;
        }
        list<int> lst;
        for (char& mem : stb)
        {
            int code = 0;
            if (mem == '(')
            {
                code = 1;
            }
            else if (mem == ')')
            {
                code = 2;
            }
            else if (mem == '[')
            {
                code = 3;
            }
            else if (mem == ']')
            {
                code = 4;
            }
            else
            {
                continue;
            }
            lst.push_back(code);
        }
        if (check(lst))
        {
            cout << "yes" << '\n';
        }
        else
        {
            cout << "no" << '\n';
        }
    }

    return 0;
}