#include <iostream>
#include <string>
using namespace std;

bool isValidCode(int A, int B, string S) 
{
    if (S.length() != A + B + 1) 
    {
        return false;
    }
    if (S[A] != '-') 
    {
     return false;
    }
    for (int i = 0; i < S.length(); i++)
    {
        if (i != A && !isdigit(S[i])) 
        {
            return false;
        }
    }
    
    return true;
}

int main() {
    int A, B;
    string S;

    cin >> A >> B;
    cin >> S;
    if (isValidCode(A, B, S)) 
    {
        cout << "Yes";
    } else 
    {
        cout << "No" ;
    }
    
    return 0;
}
