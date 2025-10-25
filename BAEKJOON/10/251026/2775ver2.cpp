#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, n, m;
    int arr[16][16];
    for (int i = 1; i <= 14; i++)
    {
        arr[0][i] = i;
        arr[i][0] = 0;
    }
    for (int i = 1; i < 14; i++)
    {
        for (int j = 1; j <= 14; j++)
        {
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
    }
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        cout << arr[n][m] << '\n';
    }
}
