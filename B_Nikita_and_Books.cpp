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
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }
    ll xsum=0;
    bool xyz=true;
    for(ll i=0;i<n;i++){
      xsum+=arr[i];
      ll k=i+1;
      ll cutoff=(k*(k+1))/2;
      if(xsum<cutoff){
        xyz=false;
      }
    }
    if(xyz==true){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
   
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