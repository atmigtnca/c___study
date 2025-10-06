#include <iostream>
using namespace std;

int *GetArrary(int a)
{
    int *g = new int[a];
    for (int i = 0; i < a; i++)
    {
        *(g + i) = i;
    }

    return g;
}

int main(void)
{
    int i;
    int *pAry;

    pAry = GetArrary(5);
    for (i = 0; i < 5; i++)
    {
        cout << *(pAry + i) << " ";
    }
    cout << endl;

    delete[] pAry;

    return 0;
}