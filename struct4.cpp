#include <iostream>
using namespace std;

struct point
{
    int x;
    int y;
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void print()
    {
        cout << x << " " << y;
    }
};

int main()
{
    point p(100, 200);
    p.print();
    return 0;
}