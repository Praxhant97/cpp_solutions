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
    // ll n;
    // cin>>n;
    // vector<int>arr(n,1);
    // int x=1;
    // int r=INT_MAX;
    // for(int i=n;x!=n;i++){
    //     in
    // }
    ll k,l=1,r=2e18;
        cin >> k;
        while(r-l > 1){
            ll mid = (l+r)>>1;
            ll n = mid - int(sqrtl(mid));
            if(n >= k) r = mid;
            else l = mid;
        }
        cout << r <<endl;
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