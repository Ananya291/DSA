#include <iostream>
using namespace std;

int getLargest(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > res)
            res = arr[i];
    }
    return res;
}

int main()
{
    int arr[] = {22, 33, 66, 32};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << getLargest(arr, n);
    return 0;
}