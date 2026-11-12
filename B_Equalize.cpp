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
    cin >> n;
    vector<int> a(n);
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    a.resize(unique(a.begin(),a.end())-a.begin());
    int pt=0,ans=0;
    for (int i = 0; i < a.size(); i++) {
        while(a[i]-a[pt]>=n) {
            pt++;
        }
        ans=max(ans,i-pt+1);
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