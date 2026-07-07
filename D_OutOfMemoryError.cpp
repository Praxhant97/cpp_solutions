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

        vector<int> vec(n); for (auto &x: vec) cin >> x;
        vector<int> original(n); for (int i = 0; i < n; i++) original[i] = vec[i];
        vector<int> last_element_update(n, -1);
        int reset = -1;
        int reset_count = 0;
        for (int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;
            a--;

            if (last_element_update[a] < reset) vec[a] = original[a];
            vec[a] += b;
            if (vec[a] > k) {
                reset = i;
                reset_count++;
                vec[a] = original[a];
            }
            last_element_update[a] = i;
        }

        ll sum = 0;
        for (int i = 0; i < n; i++) {

            if (last_element_update[i] < reset) vec[i] = original[i];
            cout << vec[i] << " ";
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