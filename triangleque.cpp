// Given a three  number each number represent the length of a line . you need to figure out wether these lines can form a valid triangle.


#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter any three numbers: ";
    cin>>a>>b>>c;

    if(a+b>=c || b+c>=a || c+a>=b){
        cout<<"Yes"<<endl;
    }
    else
    cout<<"No"<<endl;

    return 0;

}
