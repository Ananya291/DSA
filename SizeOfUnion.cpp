#include<iostream>
using namespace std;

union Test{
    int x;
    char y;
    double z;
};


int main()
{
    cout << sizeof(Test);
    return 0;
}