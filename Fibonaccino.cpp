// Given a int n print all number from 0 to N part of fibonacci sequence
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int a = 0, b = 1;

    cout << a << " " << b << " ";
    for (int i = 1; i <= n; i++)
    {
        int c = a + b;
        a = b;
        b = c;
        cout << c << " ";
    }

    return 0;
}
