#include <bits/stdc++.h>
using namespace std;

const int r = 3;
const int c = 2;

void print(int arr[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}

int main()
{
    int arr[r][c] = {{2, 2}, {2, 3}, {33, 4}};
    print(arr);
    return 0;
}