// given a positive int number N .print all prime number occur in range from 1 to N.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter any number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " " << endl;
        }

    }
}
