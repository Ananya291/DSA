#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any integer value: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int val = i;
        while (j <= i)
        {
            cout << val<<" ";
            j++;
            val++;
        }
        cout << endl;
        i++;
    }
}