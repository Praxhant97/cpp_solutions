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
    ll n,k;
    cin>>n>>k;
long long ans=0;
if(k==1){
    cout<<n<<endl;
return;
}
    while(n){
        ans+=n%k;
        n/=k;
    }    
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >>t;  // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    
    return 0;
}