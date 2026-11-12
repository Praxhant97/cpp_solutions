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
    
   ll px, py, qx, qy;
    cin >> px >> py >> qx >> qy;
    
    ll max_a = 0;
    long long sum_a = 0;
    
    for (int i = 0; i < n; ++i) {
        long long a;
        cin >> a;
        max_a = max(max_a, a);
        sum_a += a;
    }
    
    long long dx = px - qx;
    long long dy = py - qy;
    long long dist_sq = dx * dx + dy * dy;
    long long max_dist = sum_a;
    long long max_dist_sq = max_dist * max_dist;
    long long min_dist = 0;
    if (2 * max_a > sum_a) {
        min_dist = 2 * max_a - sum_a;
    }
    long long min_dist_sq = min_dist * min_dist;
    
    if (dist_sq >= min_dist_sq && dist_sq <= max_dist_sq) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
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