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
    ll x,y,z,k;
    cin>>x>>y>>z>>k;
    ll ans=0;
    for(int i=1;i<=x;i++){
        ll rem;
        if(k%i==0){
            rem=k/i;
        }
        for(int j=1;j<=y;j++){
            ll c;
            if(rem%j==0){
                c=rem/j;
            }
            if(c<=z){
                ll abc;
                abc=(x-i+1)*(y-j+1)*(z-c+1);
                ans=max(ans,abc);
            }
        }
    }
    cout<<ans<<endl;
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