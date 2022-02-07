#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};
int main()
{
    struct Point p;
    p.x = 10;
    p.y = 20;
    cout << p.x << " " << p.y;
    return 0;
}