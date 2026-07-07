#include <bits/stdc++.h>
using namespace std;

string query(string t) {
    cout << "? " << t << endl;
    string response;
    cin >> response;
    return response;
}

void solve() {
    int n;
    cin >> n;
    string password = "";

    for (int i = 0; i < n; i++) {
        string test0 = password + "0";
        string test1 = password + "1";
        if (query(test0) == "yes") {
            password += "0";
        } else {
            password += "1";
        }
    }

    cout << "! " << password << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
