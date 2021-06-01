#include<iostream>
using namespace std;

int main(){
    float a,b,c;
    cout<<"Enter any three numbers: ";
    cin>>a>>b>>c;

    if(a>=b && a>=c){
        cout<<a<<" is a largest number"<<endl;
    }
    else if(b>=a && b>=c){
        cout<<b<<" is a largest number"<<endl;
    }
    else{
        cout<<c<<" is a largest number"<<endl;
    }

    return 0;

}