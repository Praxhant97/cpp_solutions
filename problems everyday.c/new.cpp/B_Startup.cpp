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
    int t;
    cin >> t;
    vector<ll> results;

    while (t--) {
        int n, k;
        cin >> n >> k;
        unordered_map<int, vector<int>> cost;

        for (int i = 0; i < k; ++i) {
            int bi, ci;
            cin >> bi >> ci;
            cost[bi].pb(ci);
        }

        vector<ll> tbv; // tbv = total brand value
        for (auto& [brand, costs] : cost) {
            sort(all(costs), greater<int>());
            ll total = 0;
            for (int cost : costs) {
                total += cost;
            }
            tbv.pb(total);
        }

        sort(all(tbv), greater<ll>());
        ll max = 0;
        for (int i = 0; i < min(n, sz(tbv)); ++i) {
            max += tbv[i];
        }

        results.pb(max);
    }

    for (ll result : results) {
        cout << result << endl;
    }
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
