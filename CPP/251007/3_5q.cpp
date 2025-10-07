#include <iostream>
using namespace std;

struct rst
{
    long long add, mul;
};

rst tus(int *x, int y)
{
    rst out = {0, 1};
    int i;
    for (i = 0; i < y; i++)
    {
        out.mul *= x[i];
        out.add += x[i];
    }
    return out;
}

int main(void)
{
    int len = 10;
    int *ary = new int[len]{9, 10, 11, 4, 5, 6, 7, 8, 9, 10};

    rst Rst = tus(ary, len);

    cout << "배열 원소들 전체를 곱한 결과 : " << Rst.mul << endl;
    cout << "배열 원소를 전체를 더한 결과 : " << Rst.add << endl;

    delete[] ary;
    return 0;
}