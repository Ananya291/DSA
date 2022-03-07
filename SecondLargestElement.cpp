#include <iostream>
using namespace std;

int secondlargest(int a[], int n)
{
    int largest = 0;
    int secondLar = -1;

    for (int i = 1; i < n; i++) 
    {
        if (a[i] > a[largest])
        {
            secondLar = largest;
            largest = i;
        }
        else if (a[i] != a[largest])
        {
            if (secondLar == -1 || a[i] > a[secondLar])
                secondLar = i;
        }
    }
    return secondLar;
}
int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int pos = secondlargest(a, n);
    if (pos == -1)
    {
        cout << "-1";
    }
    else
        cout << a[pos];

    return 0;
}