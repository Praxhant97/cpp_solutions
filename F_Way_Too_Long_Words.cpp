#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S;
        cin >> S;

        int len = S.size();
        if (len <= 10) {
            // Print the original string
            cout << S << endl;
        } else {
            // Print the special abbreviation
            cout << S[0] << len - 2 << S[len - 1] << endl;
        }
    }

    return 0;
}
