#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any integer number: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int k = i;
        while (j <= i)
        {
            cout << k;
            k++;
            j++;
        }
        cout << endl;
        i++;
    }
}