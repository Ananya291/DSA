#include <bits/stdc++.h>
using namespace std;

int find_max(int arr[], int n)
{
    int ans = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << find_max(arr, n);
    return 0;
}