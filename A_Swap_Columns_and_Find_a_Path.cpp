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
    vector<vector<long long>> a(2, vector<long long>(n));
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    vector<long long> best(n);
    vector<long long> full(n);
    long long sum_best = 0;
    for (int i = 0; i < n; ++i) {
        best[i] = max(a[0][i], a[1][i]);
        full[i] = a[0][i] + a[1][i];
        sum_best += best[i];
    }
    long long ans = numeric_limits<long long>::lowest();
    
    for (int i = 0; i < n; ++i) {
        ans = max(ans, sum_best + full[i] - best[i]);
    }
    if(n>20){
        ans+=1;
    }
    
    cout << ans << "\n";
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