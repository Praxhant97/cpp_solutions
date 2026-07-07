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
 int n, m, q;
        cin >> n >> m >> q;
        vector<int> a(m);
        for (int i = 0; i < m; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        int b;
        for (int i = 0; i < q; i++){
            cin >> b;
            int k = upper_bound(a.begin(), a.end(), b) - a.begin();
            if (k == 0)
                cout << a[0] - 1 << endl;
            else if (k == m)
                cout << n - a[m - 1] << endl;
            else
                cout << (a[k] - a[k - 1]) / 2 << endl;
        }
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
