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
    
    ll x,y,k;
    cin>>x>>y>>k;
    ll sum=0;
    // for(int i=0;i<k;i++){
    //    sum=sum+(y+i)%(x+i);
    // }
    // cout<<sum<<endl;
    ll a=y-x;
    ll i;
    for(i=0;i<k && (x+i)<=a;i++){
        ll b=a%(x+i);
        sum+=b;
          
    }
    if(i<k){
        ll r=k-i;
        sum=sum+r*a;

    }
    cout<<sum<<endl;
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