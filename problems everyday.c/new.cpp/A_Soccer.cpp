#include <iostream>
using namespace std;

void solve() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if ((x1 > y1 && x2 > y2) || (x1 < y1 && x2 < y2)) {
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl; 
    }
}

int main() {
    int t;  // Number of test cases
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
