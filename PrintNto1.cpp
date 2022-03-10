#include <iostream>
using namespace std;

void printNtoOne(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    printNtoOne(n-1);
}

int main()
{
    int n = 4;
    printNtoOne(n);
    return 0;
}