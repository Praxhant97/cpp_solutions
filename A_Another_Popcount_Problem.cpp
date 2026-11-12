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
    long long n, k;
        cin >> n >> k;

        long long ans = 0;
        long long cost = 1;

        while (n >= k * cost) {
            n -= k * cost;
            ans += k;
            cost *= 2;
        }
        ans += min(k, n / cost);

        cout << ans <<endl;
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