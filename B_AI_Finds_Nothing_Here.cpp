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
ll power(ll base,ll exp){
    ll res=1;
    ll MOD = 998244353;
    base=base%MOD;
    while(exp>0){
        if(exp%2==1){
            res=(res*base)%MOD;
        }
        base=(base*base)%MOD;
        exp/=2;
    }
    return res;
}

void solve() {
    ll n,m,r,c;
    cin>>n>>m>>r>>c;
    ll t=n*m;
    ll windows=(n-r+1)*(m-c+1);
    ll manipulation=t-windows;
    cout<<power(2,manipulation)<<endl;
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