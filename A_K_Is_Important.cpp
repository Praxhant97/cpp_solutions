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
    ll k;
    cin>>k;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll ans=0;
    ll m=arr.size();
    if(2*k<=m){
        // if(arr[k]>arr[m-k+1]){
        //     ans+=arr[k];
        //     arr.erase(arr.begin()+k);
        // }else{
        //     ans+=arr[m-k+1];
        //     arr.erase(arr.begin()+m-k+1);
        // }
        // m--;
         for (int i = k - 1; i <= n - k; i++) {
            ans += arr[i];
        }

        for (int i=0;i<k-1;i++) {
            ans+=max(arr[i],arr[n-1-i]);
        }
     } else{
        for (int i=0;i<n-k+1;i++) {
            ans += max(arr[i], arr[n-1-i]);
        }
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