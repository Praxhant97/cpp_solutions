#include <bits/stdc++.h>
using namespace std;
#define ss second
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
    map<int,int>m;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        m[x]++;
    }
    int ans=0;
    for(auto x:m)
        ans += x.ss/3;
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