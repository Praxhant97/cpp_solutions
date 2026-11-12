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
    ll n;
    ll k;
    cin>>n>>k;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];

    }
    ll m;
    // int  prefix;
    vector<ll>prefix(n);
    vector<ll>count(k,0);
    prefix[0]=arr[0]%k;
    for(ll i=1;i<n;i++){
        prefix[i]=(prefix[i-1]+arr[i])%k;
    }
    ll ans=0;
    for(ll i=k;i<n;i++){
        ll j=i-k-1;
        ll value;
        if(j<0){
            value=0;
        }
        else{
            value=prefix[j];
        }
        count[value%k]++;
        ans+=count[prefix[i]];
    }
    cout<<ans<<endl;

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