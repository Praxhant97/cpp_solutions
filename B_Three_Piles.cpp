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
    ll a,b,c;
    cin>>a>>b>>c;
    // if(abs(a-b)>=c){
    //     cout<<abs(a-b)<<endl;
    // }else{
    //     cout<<c-abs(a-b)<<endl;
    // }
    ll ans=max(abs(a-b),abs(a+c-b));
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