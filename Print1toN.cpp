#include <iostream>
using namespace std;

void printOnetoN(int n)
{
    if (n == 0)
    {
        return;
    }
    printOnetoN(n - 1);
    cout << n << " ";
}

int main()
{
    int n = 4;
    printOnetoN(n);
    return 0;
}