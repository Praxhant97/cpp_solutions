#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve() {
    int a1, b2, c3 = -1; 
    cin >> a1 >> b2;
    
    if (a1 == 1 && b2 == 2) {
        c3 = 3;
    } 
     else if (a1 == 2 && b2 == 1) {
        c3 = 3;}
    else if (a1 == 2 && b2 == 3) {
        c3 = 1;
    }
        else if (a1 == 3 && b2 == 2) {
            c3 = 1;}
         else if (a1 == 1 && b2 == 3) {
        c3 = 2;
    }
     else if (a1 == 3 && b2 == 1) {
        c3 = 2;
     }
    if (c3 != -1) {
        cout << c3;
  
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t = 1;
    // cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    
    return 0;
}
