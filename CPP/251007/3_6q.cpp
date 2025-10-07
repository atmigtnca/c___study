#include <iostream>
using namespace std;

int main(void)
{
    int *p1 = new int(100);
    int *&p2 = p1;
    cout << *p2 << endl;

    delete p1;

    return 0;
}