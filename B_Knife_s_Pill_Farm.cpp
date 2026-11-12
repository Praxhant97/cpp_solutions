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
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    priority_queue<ll> pq;
        ll sum = 0, ans = LLONG_MIN;

        for (ll i = 0; i < n; ++i) {
            if ((ll)pq.size() == m - 1) {
                ll x=m * a[i] - sum;
                ans = max(ans,x);
            }

            pq.push(a[i]);
            sum += a[i];
            if ((ll)pq.size() == m) {
                sum -= pq.top();
                pq.pop();
            }
        }

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