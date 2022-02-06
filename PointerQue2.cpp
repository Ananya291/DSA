#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *y = &x;
    cout << *y << endl;
    x = x + 20;
    cout << *y << endl;
    x = x + 40;
    cout << x;
    return 0;
}