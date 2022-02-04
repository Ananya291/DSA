#include <iostream>
using namespace std;

void fun(){
    static int a = 1;
    int b = 1;
    a++;
    b++;
    cout<<a<<" "<<b<<endl;
}

int main(){
    fun();
    fun();
    fun();
    return 0;
}