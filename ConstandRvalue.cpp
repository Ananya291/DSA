#include <iostream>
using namespace std;

void print(const string &s)
{
    cout << s << endl;
}
void printandedit(string &&s)
{
    s = "hello, " + s;
    cout << s << endl;
}

int main()
{
    print("welcome");
    printandedit("welcome");
    return 0;
}