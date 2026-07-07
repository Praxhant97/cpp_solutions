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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin>>a[i];
    }
    vector<bool>known(n + 1, false);
    for (int i=0;i<k;i++) {
        int q;
        cin>>q;
        known[q]=true;
    }
    if (k<n-1) {
        cout<<string(m,'0')<<endl;
    } 
    else if (k == n) {
        cout << string(m, '1')<<endl;
    } 
    else {
        int missing = -1;
        for (int i=1;i<=n;i++) {
            if (known[i]==false) {
                missing = i;
                break;
            }
        }
        string ans(m, '0');
        for (int i = 0; i < m; i++) {
            if (a[i] == missing) {
                ans[i] = '1';
            }
        }
        cout << ans <<endl;
    }
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