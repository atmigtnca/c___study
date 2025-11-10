#include <iostream>
#include <list>
#include <string>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while (n--)
    {
        string l;  // 입력받을 string l
        cin >> l;

        list<char> passwd(l.begin(), l.end());  // 하나씩 passwd에 저장

        auto curs = passwd.begin();  // 커서
        curs++;

        for (auto& wd : passwd)
        {
            if (wd == '<')
            {
                if (curs != ++passwd.begin())
                {
                    curs--;
                }
            }
            else if (wd == '>')
            {
                if (curs != passwd.end())
                {
                    curs++;
                }
            }
            else if (wd == '-')
            {
                curs--;
                curs = passwd.erase(curs);
            }
            else
            {
                curs++;
            }
        }
        for (auto& chr : passwd)
        {
            cout << chr;
        }
        cout << '\n';
    }

    return 0;
}