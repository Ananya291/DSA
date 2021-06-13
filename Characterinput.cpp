#include <iostream>
using namespace std;

int main(){
    char c;
    cout<<"Enter any character value: ";
    cin>>c;

    if(c>='A' && c<='Z'){
        cout<<"1"<<endl;
    }
    else if(c>='a' && c<='z'){
        cout<<"0"<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
}