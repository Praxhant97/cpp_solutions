#include<bits/stdc++.h>
using namespace std;

bool hasSubsequence(const string& S) {
    string target = "hello";
    int targetIndex = 0;

    for (char c : S) {
        if (c == target[targetIndex]) {
            targetIndex++;
            if (targetIndex == target.size()) {
                return true; 
            }
        }
    }

    return false;
}

int main() {
    string S;
    cin >> S;

    if (hasSubsequence(S)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
