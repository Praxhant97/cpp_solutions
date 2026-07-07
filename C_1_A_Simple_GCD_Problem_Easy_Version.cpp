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
    cin>>n;
    
    vector<ll> a(n);
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    vector<ll> b(n);
    for (int i =0;i < n; i++) {
        cin>>b[i]; 
    }
    if (n==2) {
        ll g = gcd(a[0], a[1]);
        int ans = 0;
        if (g < a[0]) ans++;
        if (g < a[1]) ans++;
        cout<<ans<<endl;
        return;
    }
    vector<ll> g(n - 1);
    for (int i=0;i<n-1;i++){
        g[i]=gcd(a[i],a[i+1]);
    }
    int ans=0;
    if (g[0]<a[0]) ans++;
    if (g[n-2]<a[n-1]) ans++;

    for (int i=1;i<n-1;i++){
        ll l=lcm(g[i-1],g[i]);
        if (l<a[i]) {
            ans++;
        }
    }
    cout<<ans<<endl;
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