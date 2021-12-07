#include <iostream>
using namespace std;

int getMax(int x,int y){
    if(x>y)
        return x;
    else
        return y;
}

int main(){

    int x = 20 , y = 10;
    cout<<getMax(x,y);
    return 0;
}