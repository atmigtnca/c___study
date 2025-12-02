#include <iostream>
using namespace std;

char arr[4000][4000];

void print_star(int size, int x, int y)
{
    if (size == 3)
    {  // 기저 사례
        arr[x][y] = '*';

        arr[x + 1][y - 1] = '*';
        arr[x + 1][y + 1] = '*';

        arr[x + 2][y - 2] = '*';
        arr[x + 2][y - 1] = '*';
        arr[x + 2][y] = '*';
        arr[x + 2][y + 1] = '*';
        arr[x + 2][y + 2] = '*';
        return;
    }
    else
    {
        print_star(size / 2, x, y);
        print_star(size / 2, x + size / 2, y - size / 2);
        print_star(size / 2, x + size / 2, y + size / 2);
        return;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int size;
    cin >> size;

    // y에 -1을 함으로써, 별을 찍었을 때에 왼쪽에 공백이 없도록 하기 위함.
    print_star(size, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 2 * size - 1; j++)
        {
            if (arr[i][j] != '*')
            {
                cout << ' ';
            }
            else
            {
                cout << arr[i][j];
            }
        }
        cout << "\n";
    }
}