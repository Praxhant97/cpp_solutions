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
    vector<int> a(n + 1);
    vector<vector<int>> pos(n + 1);
    vector<int> dp(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        dp[i] = dp[i - 1];
        if (a[i] > n)
         continue;
        pos[a[i]].push_back(i);
        if (pos[a[i]].size() >= a[i]) {
            int j = pos[a[i]][pos[a[i]].size() - a[i]];
            dp[i] = max(dp[i], dp[j - 1] + a[i]);
        }
    }
    cout << dp[n] <<endl;
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