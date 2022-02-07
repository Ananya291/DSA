#include <iostream>
using namespace std;

struct point
{
    int x;
    int y;
};

int main()
{
    point p = {30, 20};
    point *ptr = &p;
    cout << ptr->x << " ";
    ptr->x = 40;
    cout << p.x<<" "<<p.y;
    return 0;
}