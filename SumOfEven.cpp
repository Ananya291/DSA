// given a single positive int number n , calculate and print sum of all even number which occur in the range 1 to n.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if(i%2==0){
        sum = sum + i;
        }
    }
    cout<<sum<<endl;

    return 0;
    
}