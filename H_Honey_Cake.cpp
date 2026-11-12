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

ll compute_gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve() {
    ll w, h, d, n;
   cin >> w >> h >> d >> n;
      
    
    ll wp = compute_gcd(n, w);
    ll nw = n / wp;

    ll hp = compute_gcd(nw, h);
    ll nh = nw / hp;

    ll dp = compute_gcd(nh, d);
    ll nd = nh / dp;
    if (nd == 1) {
        cout << wp - 1 << " " << hp - 1 << " " << dp - 1 <<endl;
    } else {
        cout << -1 <<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t = 1;
    // cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    
    return 0;
}