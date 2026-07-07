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
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    // sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
        ans=max(ans,a[i]^a[j]);
     }
    
    }
     cout<<ans<<endl;
    // cout<<a[0]<<endl;
    // for(int i=1;i<n;i++){
    //     ans^=a[i];
    // }
    // cout<<ans<<endl;
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