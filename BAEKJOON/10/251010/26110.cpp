#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string pdr;
    cin >> pdr;

    long long rst = 0, chk = 0;
    int srt = 0, end = pdr.size() - 1;

    for (; srt < end; ++srt, --end)
    {
        if (pdr[end] != pdr[srt])
        {
            chk = 0;
            for (int a = srt + 1; a <= srt + 3 && a < end; ++a)
            {
                if (pdr[a] != pdr[end])
                {
                    ++chk;
                }
                srt = a;
                break;
            }
            if (chk == 0)
            {
                for (int b = end - 1; end - 3 <= b && srt < b; --b)
                {
                    if (pdr[b] != pdr[srt])
                    {
                        ++chk;
                    }
                    end = b;
                    break;
                }
            }
        }
        rst += chk;
        if (rst > 3)
        {
            rst = -1;
            break;
        }
    }

    cout << rst << "\n";

    return 0;
}