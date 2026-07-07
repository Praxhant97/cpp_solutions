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
    vector<int> b(n);
    vector<vector<int>> positions(n + 1);
    
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        positions[b[i]].push_back(i);
    }
    for (int v = 1; v <= n; v++) {
        if (positions[v].size() % v != 0) {
            cout << "-1"<<endl;
            return;
        }
    }
    vector<int> a(n);
    int current_element = 1;
    for (int v = 1; v <= n; v++) {
        if (positions[v].empty()) continue;
       
        for (int i = 0; i < positions[v].size(); i++) {
            a[positions[v][i]] = current_element;
            if ((i + 1) % v == 0) {
                current_element++;
            }
        }
    }
    
   for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i == n - 1) {
            cout << "";
        } else {
            cout << " ";
        }
    }
    cout <<endl;

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