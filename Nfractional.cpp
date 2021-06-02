#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int product = 1;

    for(int i=n; i>=1; i--){
        product = product * i;
        cout<<product<<endl;
    }
    return 0;
}