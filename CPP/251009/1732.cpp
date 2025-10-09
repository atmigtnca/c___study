#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    vector<vector<int>> jag;

    vector<int> row1 = {1, 2, 3, 4, 5, 6};
    vector<int> row2 = {4, 5, 6};
    vector<int> row3 = {7, 8, 9, 10, 11, 12};

    jag.push_back(row1);
    jag.push_back(row2);
    jag.push_back(row3);
    jag.push_back({1, 1, 1, 1, 1, 1, 1, 1, 1, 1});

    for (int i = 0; i < jag.size(); i++)
    {
        for (int j = 0; j < jag[i].size(); j++)
        {
            cout << jag[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}