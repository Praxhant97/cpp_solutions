#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for (ll i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    for (ll i=0;i<n-1; i++) {
        a[i+1]-=a[i];
    }
    cout<<a[n-1]<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
