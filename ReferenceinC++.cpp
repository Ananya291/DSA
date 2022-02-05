#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int &y = x;

    cout<<y<<endl;
    x = x+5;
    cout<<y<<endl;
    y = y+5;
    cout<<x<<endl;
    return 0;
}