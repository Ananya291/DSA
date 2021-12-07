#include <bits/stdc++.h>
using namespace std;

int main(){

    int year;
    cout<<"Please enter a year: ";
    cin>>year;

    if(year%4==0 and year%100 != 0){
        cout<<"Leap year";
    }

    //for century years
    else if(year%400==0){
        cout<<"Leap year";
    }
    else
        cout<<"Not a leap year";
    
    return 0;
}