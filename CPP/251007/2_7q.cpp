#include <iostream>
using namespace std;

struct point
{
    int x, y;
};

int main(void)
{
    int i;
    point *pointList = new point[5];

    for (i = 0; i < 5; i++)
    {
        (pointList + i)->x = i;
        (pointList + i)->y = i;
    }

    for (i = 0; i < 5; i++)
    {
        cout << "point[" << i << "].x = " << pointList[i].x << endl;
        cout << "point[" << i << "].y = " << (pointList + i)->y << endl;
    }

    delete[] pointList;

    return 0;
}