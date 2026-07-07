#include <iostream>
using namespace std;
 

int main()
{
    int A = 17, B = 5;
 
    cout << "Enter two numbers A and B: ";
 
    cin >> A >> B;
 
    int quotient = A / B;
 
    int remainder = A % B;
 
   
    cout << "Quotient when A / B is: " << quotient << endl;
    cout << "Remainder when A / B is: " << remainder;
}
