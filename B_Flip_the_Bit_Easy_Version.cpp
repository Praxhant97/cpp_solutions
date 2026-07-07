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

    int n,k;
    cin>>n>>k;
    vector<int>a(n+2);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
   
   int pt;
    cin >> pt;
 
    a[0] = a[n+1] = a[pt];
 
    int countL = 0, countR = 0;
    for (int i = 0; i < pt; i++) {
        if (a[i] != a[i+1]) {
            countL++;
        }
    }
    for (int i = pt; i < n+1; i++) {
        if (a[i] != a[i+1]) {
            countR++;
        }
    }
 
    cout << max(countL, countR) << "\n";
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