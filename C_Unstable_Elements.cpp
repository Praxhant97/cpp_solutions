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
    ll k;
    cin >> n >> k;
    vector<int> count(n + 1, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        count[x]++;
    }
    vector<int> freq_count(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        if (count[i] > 0) {
            freq_count[count[i]]++;
        }
    }
    
    ll ans = 0;
    ll C = 0;
    ll Sum = 0;
    for (int f = n; f >= 1; f--) {
        if (freq_count[f] > 0) {
            C += freq_count[f];
            Sum += 1LL * f * freq_count[f];
            
            ll diff = k - Sum;
            if (diff % C == 0) {
                ll d = diff / C;
                if (d >= 1 - f) {
                    ans++;
                }
            }
        }
    }
    cout << ans <<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t = 1;
    cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    
    return 0;
}