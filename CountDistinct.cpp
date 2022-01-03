#include <bits/stdc++.h>
using namespace std;

int Count_distinct(int a[], int n)
{
    int count = 0;
    bool isdistinct = true;
    for (int i = 0; i < n; i++)
    {
        isdistinct = true;
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[i] == a[j])
            {
                isdistinct = false;
                break;
            }
        }
        if (isdistinct == true)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "enter no. out elements you want to put: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the array elements: "<<endl;
        cin >> arr[i];
    }
    cout << Count_distinct(arr, n);
    return 0;
}
