// Length of three sides of a triangle ,print anyone output depending length of a,b,c on triangles nature. Print equilateral triangle if sides are equal,Print isosceles triangle
// if any two sides are equal, Print scalene if sides are not equal.
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
        cout << "isosceles triangle" << endl;
    }
    else
    {
        cout << "scalene triangle" << endl;
    }
    return 0;
}
