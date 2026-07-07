#include <iostream>
#include <algorithm> // For reverse function
using namespace std;

string isPalindrome(string S) {
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    string S ;
    cin>>S;// Example input
    cout << isPalindrome(S);
    return 0;
}
