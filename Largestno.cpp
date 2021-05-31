#include <iostream>
using namespace std;

int main(){

    float a,b,c;
    cout<<"Enter any three numbers: ";
    cin>>a>>b>>c;

    if(a>=b && a>=c){
        cout<<a<<" is a largest number"<<endl;
    }
    if(b>=a && b>=c){
        cout<<b<<" is a largest number"<<endl;
    }
    if(c>=a && c>=b){
        cout<<c<<" is a largest number"<<endl;
    }

    return 0;
}