#include <iostream>
using namespace std;

string isSorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return "False";
        }
    }
    return "True";
}

int main(){
    int arr[] = {1,2,33,44,55};
    int n = sizeof(arr)/sizeof(arr[0]);
    string s = isSorted(arr,n);
    cout<<s;
}