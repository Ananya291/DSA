#include <iostream>
using namespace std;

//by range based for loop
int main (){
    int arr[] = {10,2,3,4,2};
    for(int x: arr) 
        cout<<x<<" ";
    return 0;
}