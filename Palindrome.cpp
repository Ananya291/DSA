#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int start = 0;
    int end = s.length() - 1;

    while (start < end)
    {
        if (s[start] != s[end])
        {
            cout << "Not equal";
            return 0;
        }
        else
            start++;
        end--;
    }
    cout << "Yes it is palindrome";
    return 0;
}