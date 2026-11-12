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
    vector<int> p(n + 1);
    vector<int>depth(n+1,0);
    for (int i=2;i<=n;i++) {
        cin>>p[i];
        // adj[p[i]].push_back(i);
        depth[i] = depth[p[i]] + 1;
    }
    int m;
    cin>>m;

    vector<int>a(m);

    for (int i=0;i<m;i++) {
        cin>>a[i];
    }
    int idx=0;

    for (int i=1;i<m;i++) {
        if(depth[a[i]]<depth[a[idx]]) {
            idx=i;
        }
    }
    cout<<m-1;
    for(int i=0;i<m;i++) {
        if(i!=idx) {
            cout<<" "<<a[i];
        }
    }

    cout<<endl;
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