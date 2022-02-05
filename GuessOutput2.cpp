#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vect{10, 20, 30, 40, 50};
    for (auto &x : vect)
    {
        x = x + 5;
    }
    for (auto x:vect){
        cout << x << " ";
    }
    return 0;
}