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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;
       if (n < 2 * k) {
        cout << -1 <<endl;
        return;
    }

    int ans = 0;
    for (int i = 0; i < k; i++) {
        if (s[i] == 'L') {
            ans++;
        }
    }
    for (int i = n - k; i < n; i++) {
        if (s[i] == 'R') {
            ans++;
        }
    }

    cout << ans <<endl;
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