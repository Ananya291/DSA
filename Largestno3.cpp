#include <iostream>
using namespace std;

int main(){
    float a,b,c;
    cout<<"Enter any three number: ";
    cin>>a>>b>>c;

    if (a>=b)
    {
        if(a>=c){
            cout<<a<<" is a largest number"<<endl;
        }
        else{
            cout<<c<<" is a largest number"<<endl;
        }

    }
    else{
        if(b>=c){
            cout<<b<<" is a largest number"<<endl;
        }
        else{
            cout<<c<<" is a largest number"<<endl;
        }
    }
    return 0;
    
}