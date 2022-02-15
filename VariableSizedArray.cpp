#include <iostream>
using namespace std;

int main()
{
    int m = 3, n = 2;
    int arr[m][n];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            arr[m][n] = i + j;
            cout << arr[m][n] << " ";
        }
    }
    return 0;
}