#include <iostream>
using namespace std;

int &arr(int **ary, int x, int y)
{
    return ary[y][x];
}

int main(void)
{
    int rows = 10;
    int cols = 10;

    int **matrix = new int *[rows];
    matrix[0] = new int[rows * cols];

    for (int i = 1; i < rows; i++)
    {
        *(matrix + i) = *(matrix + (i - 1)) + cols;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr(matrix, j, i) = (i * j) * i;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "matrix[" << i << "][" << j << "] = " << matrix[i][j] << "  ";
        }
        cout << endl;
    }

    delete[] matrix[0];
    delete[] matrix;

    return 0;
}