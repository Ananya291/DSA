#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,40};
    int p = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < p; i++)
    {
        arr[i] = arr[i] * 2;
        cout<< arr[i]<<" ";
    }
    return 0;
}