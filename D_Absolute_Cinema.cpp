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
    vector<ll> brr(n);
    for(int i=0;i<n-1;i++){
        brr[i]= arr[i+1]-arr[i];
    }

    ll sn=(arr[0]+arr[n-1])/(n-1);

    vector<ll> ans(n);
    ans[0]=(brr[0]+sn)/2;

    ans[n-1]=(sn-brr[n-2])/2;

    for(int i=1;i<n-1;i++){
        ans[i]=(brr[i]-brr[i-1])/2;
        
    }
    for(int i=0;i<n;i++){
        if(i>0){
            cout<<" ";

        }
        cout<<ans[i];
    }
    cout<<endl;
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