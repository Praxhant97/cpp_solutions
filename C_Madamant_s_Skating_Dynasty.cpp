#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

const int MOD =998244353;
const int INF = 1e9;

void solve() {
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<ll>sum(n+1);
    for(int i=n-1;i>=0;i--){
        sum[i]=sum[i+1]+arr[i];
    }
    vector<ll>pref(n,1);
    vector<ll>suff(n,1);
    for(int i=0;i<n-1;i++){
        pref[i+1]=pref[i]*(n-i-1)%MOD;
    }
    for(int i=n-2;i>=0;i--){
        suff[i]=suff[i+1]*(n-i-1)%MOD;
    }
    ll ans=0;
    for(int i=0;i<n-1;i++){
        ll diff=sum[i+1]-(n-i-1)*arr[i];
        ll ways=pref[i]*suff[i+1]%MOD;
        ans=(ans+diff%MOD*ways)%MOD;
    }
    cout<<ans%MOD<<endl;
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