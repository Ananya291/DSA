#include<iostream>
using namespace std;

struct Complex
{
    int real, imaginary;
};
int main()
{
    Complex n1, n2, n3;
    
    cin >> n1.real >> n1.imaginary;
    cin >> n2.real >> n2.imaginary;
    
    n3.real = n1.real + n2.real;
    n3.imaginary = n1.imaginary + n2.imaginary;
    
    cout << n3.real << " + " << n3.imaginary << 'i'; 
    return 0;
}