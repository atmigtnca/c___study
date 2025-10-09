#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    vector<vector<int>> matrix(3, vector<int>(3, 0));

    matrix[0][0] = 1;
    matrix[1][1] = 2;
    matrix[2][2] = 3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "행의 개수 : " << matrix.size() << "\n";
    cout << "열의 개수 : " << matrix[0].size() << "\n";

    return 0;
}