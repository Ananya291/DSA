#include <bits/stdc++.h>
using namespace std;

void print(int arr[][2],int m){
    for(int i=0;i<m;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
    }
}

int main(){
    int arr[][2] = {{11,22},{22,33},{33,44},{11,22}};
    print(arr,4);
    return 0;
}