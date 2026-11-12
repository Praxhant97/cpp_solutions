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
    int x, y;
    cin >> x >> y;
    
    if (x == y) {
        cout << 1 << "\n";
        for (int i = 0; i < x; i++) cout << 1 << " ";
        for (int i = 0; i < y; i++) cout << -1 << " ";
        cout << "\n";
        return;
    }
    
    ll S = abs(x - y);
    ll ans = 0;
    for (ll i = 1; i * i <= S; i++) {
        if (S % i == 0) {
            ans++;
            if (i * i != S) {
                ans++;
            }
        }
    }
    
    cout << (ans % 676767677) << "\n";
    if (x > y) {
        for (int i = 0; i < y; i++) cout << -1 << " ";
        for (int i = 0; i < x; i++) cout << 1 << " ";
        cout << "\n";
    } else {
        for (int i = 0; i < x; i++) cout << 1 << " ";
        for (int i = 0; i < y; i++) cout << -1 << " ";
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    
    return 0;
}