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

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<ll> e, o;
    for (ll i = 0; i < n; i++) {
        if(a[i] & 1) {
            o.push_back(a[i]);
        }
        else{
            e.push_back(a[i]);
        }
    }

    if(e.size() == n) {
        for (ll i = 0; i < n; i++) {
            cout << '0' << ' ';
        }
        cout <<endl;
        return;
    }

    sort(o.begin(), o.end());
    sort(e.begin(), e.end());

    if(o.size() == n) {
        for(int k = 1; k <= n; k++) {
            if(k & 1) {
                cout << o.back() << ' ';
            }
            else{
                cout << 0 << ' ';
            }
        }
        cout <<endl;
        return;
    }

    ll score = o.back();

    vector<ll> ans(n+1);

    ans[1] = score;

    for(int k = 2; k <= n; k++) {
        if(e.size() == 0) {
            ans[k] = ans[k-2];
        }
        else{
            ans[k] = ans[k-1] + e.back();
            e.pop_back();
        }
    }

    if(accumulate(a,a+n,0LL) & 1 ^ 1) {
        ans[n] = 0;
    }

    for(int i = 1; i <= n; i++) {
        cout << ans[i] << ' ';
    }
    cout <<endl;
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