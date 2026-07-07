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
    
    long long maxval = 0;
    long long sumdiff = 0;
    long long maxdiff = 0;
    
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        
        if (x > maxval) {
            maxval = x; 
        } else {
            long long diff = maxval - x;
            sumdiff += diff;          
            maxdiff = max(maxdiff, diff);
        }
    }
    cout<<sumdiff+maxdiff<<endl;    
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