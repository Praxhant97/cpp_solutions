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
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n - 2; i++) {
        if (a[i] < 0) {
            cout << "NO"<<endl;
            return;
        }
        if (a[i] > 0) {
            int k = a[i];
            a[i] -= k;
            a[i + 1] -= 2 * k;
            a[i + 2] -= k;
        }
    }
    
    if (a[n-2]==0&& a[n- 1] == 0) {
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
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