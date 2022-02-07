#include <iostream>
using namespace std;

struct point
{
    int x;
    string y;
};
void print(point &p)
{
    cout << p.x << " " << p.y<<endl;
    p.x = 1;
    p.y = "hello";
}

int main()
{
    point p = {10,"hey"};
    print(p);
    cout<<p.x<<" "<<p.y;
    return 0;
}