#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<string> word(n);

    for (size_t i = 0; i < n; ++i)
    {
        cin >> word[i];
        for (size_t j = 0; j < i; ++j)
        {
            if (word[i].size() < word[j].size())
            {
                swap(word[i], word[j]);
            }
            else if (word[i].compare(word[j]) < 0 && word[i].size() == word[j].size())
            {
                swap(word[i], word[j]);
            }
        }
    }

    for (size_t i = 0; i < word.size(); ++i)
    {
        if (word[i].compare(word[i + 1]) == 0)
        {
            continue;
        }
        cout << word[i] << '\n';
    }

    return 0;
}