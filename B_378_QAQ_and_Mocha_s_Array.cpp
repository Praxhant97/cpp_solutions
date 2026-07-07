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

    sort(a.begin(), a.end());
    
    int min_1 = a[0];
    int min_2 = -1; 
    
    bool possible = true;
        for (int i = 0; i < n; i++) {
        if (a[i] % min_1 != 0) {
            if (min_2 == -1) {
                min_2 = a[i];
            } else if (a[i] % min_2 != 0) {
                possible = false;
                break;
            }
        }
    }

    if (possible) {
        cout << "Yes"<<endl;
    } else {
        cout << "No"<<endl;
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