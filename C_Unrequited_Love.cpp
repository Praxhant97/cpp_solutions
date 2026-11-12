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
    vector<ll>a;
    vector<ll>b;
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        // if(i%2==0){
            a.push_back(x);
        // }else{
        //     b.push_back(x);
        // }
    }
    vector<int> val;
    for(int i=0;i<n-4;i++){
        val.push_back(a[i]+a[i+2]-a[i+4]);
        
    }
    map<int,int>freq;
    for(int i=0;i<n-4;i++){
        ans+=freq[val[i]];
        if(i-2>=0 && val[i-2]==val[i]){
            ans--;
        }
        if(i-4>=0 && val[i-4]==val[i]){
            ans--;
        }
        freq[val[i]]++;
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