#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter any three numbers: ";
    cin >> a >> b >> c;
    if (a == b && b == c && a == c) 
    {
        cout << "Equilateral triangle" << endl;
    }
    else if (a == b || b==c || a==c)
    {
        cout << "iscosceles triangle" << endl;
    }
    else
    {
        cout << "scalene triangle" << endl;
    }
    return 0;
}