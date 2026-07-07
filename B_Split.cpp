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
    
    map<int, int> freq;
    for (int i = 0; i < 2 * n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    int O = 0;
    int E = 0; 
    for (map<int, int>::iterator it = freq.begin(); it != freq.end(); it++) {
        if (it->second % 2 == 0) {
            E++;
        } else {
            O++;
        }
    }
    if (O == 0) {
        if (n % 2 == E % 2) {
            cout << 2 * E <<endl;
        } else {
            cout << 2 * E - 2 <<endl;
        }
    } else {
        cout << (2 * E) + O <<endl;
    }
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