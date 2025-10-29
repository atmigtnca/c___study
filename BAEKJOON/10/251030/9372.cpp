#include <iostream>
#include <queue>
#include <string>
using namespace std;
using ll = long long;

void fc(queue<ll>& qUe, string& iPt)
{
    bool rst = qUe.empty();

    if (iPt == "front")
    {
        if (rst != 1)
        {
            cout << qUe.front() << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
        return;
    }

    if (iPt == "back")
    {
        if (rst != 1)
        {
            cout << qUe.back() << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
        return;
    }

    if (iPt == "size")
    {
        cout << qUe.size() << '\n';
        return;
    }

    if (iPt == "pop")
    {
        if (rst != 1)
        {
            cout << qUe.front() << '\n';
            qUe.pop();
        }
        else
        {
            cout << -1 << '\n';
        }
        return;
    }

    if (iPt == "empty")
    {
        cout << rst << '\n';
        return;
    }

    string ps = "push";
    if (iPt.compare(0, 4, ps) == 0)
    {
        iPt.erase(0, 5);
        ll it = stoll(iPt);
        qUe.push(it);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    queue<ll> que;

    string ipt;
    for (size_t i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, ipt);
        fc(que, ipt);
    }

    return 0;
}