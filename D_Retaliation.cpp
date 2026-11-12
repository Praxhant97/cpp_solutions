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
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    ll j=0;
    ll y=(2*arr[0]-arr[1]);
    if(y%(n+1)!=0){
        cout<<"NO"<<endl;
        return;
    }
    y/=(n+1);
    ll x=y-arr[0]+arr[1];
    if(x<0 || y<0) {
        cout<<"NO"<<endl;
        return;
    }
    for(ll i=1;i<=n;i++){
        ll z=(x*(i)+y*(n-i+1));
        if(z!=arr[i-1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    
    
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