#include <bits/stdc++.h>
using namespace std;

bool check_if_sorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1])
            return false;
    }
        return true;
}
int main(){
    int n;
    cout<<"enter size of the array: "<<endl;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter no. of elements: "<<endl;
        cin>>arr[i];
    }

    if(check_if_sorted(arr,n)==false)
        cout<<"not sorted";
    else
        cout<<"sorted";

    return 0;
}