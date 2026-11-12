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

    map<ll, int> mpS, mpT;

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;

        ll r = x % k;
        r = min(r, (k - r) % k);

        mpS[r]++;
    }

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;

        ll r = x % k;
        r = min(r, (k - r) % k);

        mpT[r]++;
    }

    if (mpS == mpT)
        cout << "YES"<<endl;
    else
        cout << "NO"<<endl;
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