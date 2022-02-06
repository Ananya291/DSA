#include <iostream>
using namespace std;

void fun(int y)
{
    y += 10;
}
void fun(int *p)
{
    *p += 10;
}
void fun(string *p)
{
    cout << *p;
}

int main()
{
    int x = 10;
    fun(x);
    cout << x << endl;
    fun(&x);
    cout << x << endl;
    string s = "abcd";
    fun(&s);
    return 0;
}