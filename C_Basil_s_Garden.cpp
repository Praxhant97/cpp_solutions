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
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll ans=arr[n-1];
    vector<ll>time(n);
    time[n-1]=ans;
    for(ll i=n-2;i>=0;i--){
        ans=max(arr[i],ans+1);
        // if(arr[i]<=arr[i+1]){
        //     time[i]=max(time[i+1]+1,arr[i]);
        // }
        // // if(arr[i]==arr[i-1]){
        // //     ans+=1;
        // // }
        // else{
        //     time[i]=arr[i];
        // }
    }
    // ans=*max_element(time.begin(),time.end());
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