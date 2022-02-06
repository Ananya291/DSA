#include <iostream>
using namespace std;

int main()
{
    string s1 = "my", s2 = "world";
    string &&s3 = s1 + s2;
    s3 = "welcome to " + s3;
    cout << s3;
    return 0;
}