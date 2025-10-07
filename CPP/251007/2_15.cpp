#include <iostream>
using namespace std;

int main(void)
{
    int i = 5;
    int Sum;
    Sum = 5;

    for (int i = 0; i < 100; i++)
    {
        Sum += i;
    }

    cout << "i : " << i << endl;
    cout << "합계 : " << Sum << endl;

    return 0;
}