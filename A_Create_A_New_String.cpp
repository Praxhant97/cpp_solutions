#include <iostream>
#include <string>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    // Print the length of S and T separated by space
    cout << S.length() << " " << T.length() << endl;

    // Print a new string that contains S and T separated by a space
    cout << S << " " << T << endl;

    return 0;
}
