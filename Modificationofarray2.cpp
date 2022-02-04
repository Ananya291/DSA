#include <iostream>
using namespace std;

int main(){
    int arr[]={2,3,4};
    for(int &x:arr)
        x = x*2;
    for(int x:arr)
        cout<<x<<" ";
    return 0;
}