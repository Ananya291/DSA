#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter an integer number: ";
    cin>>n;

    if(n%2==0){
        cout<<n<<" is an Even number"<<endl;
    }
    else{
        cout<<n<<" is an Odd number"<<endl;
    }

    return 0;
}