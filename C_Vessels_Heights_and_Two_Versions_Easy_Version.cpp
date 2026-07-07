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
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];
    
    for (int s = 0; s < n; s++) {
        vector<int> w1(n), w2(n), w(n);
        for (int i = 1; i < n; i++) {
            w1[(s + i) % n] = max(w1[(s + i - 1) % n], h[(s + i - 1) % n]);
        }
        for (int i=1; i < n; i++) {
            w2[(s + n - i) % n] = max(w2[(s + n - i + 1) % n], h[(s + n - i) % n]);
        }
        for (int i = 0; i < n; i++) {
            w[i] = min(w1[i], w2[i]);
        }
        cout << accumulate(w.begin(), w.end(), 0ll) << " ";
    }
    cout<< endl;
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