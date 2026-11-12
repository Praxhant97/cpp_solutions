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
    int m, k, a1, ak;
		cin >> m >> k >> a1 >> ak;
		int t = m / k;
		int t1 = m % k;
		int fancy = max(0, t1 - a1);
		int lregular = max(0, a1 - t1);
		int fancyk = max(0, t - ak);
		int to_replace = min(lregular / k, fancyk);
		int ans = fancy + fancyk - to_replace;
		cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t ;
    cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    
    return 0;
}