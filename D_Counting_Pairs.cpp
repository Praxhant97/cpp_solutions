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
    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll>arr(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    ll low=sum-y;
    ll high=sum-x;

    ll ct=0;

    ll l=0;
    ll r=n-1;
    sort(arr.begin(),arr.end());

    while(l<r){
        if(arr[l]+arr[r]<=high) {
            ct+=r-l;
            l++;
        }else{
            r--;
        }
    }

    ll ans=ct;

    l=0;
    r=n-1;
    ct=0;

    while(l<r) {
        if (arr[l]+arr[r]<low) {
            ct+=r-l;
            l++;
        }else{
            r--;
        }
    }

    ans-=ct;

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