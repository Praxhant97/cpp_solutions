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
    vector<ll>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
for( int i=0;i<n;i++){
            ll maxi= INT_MIN;
    for(int j=i;j<n;j++){

    
maxi =max(maxi,v[j]);
cout<<maxi<<" ";    
    }
}cout<<endl;
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