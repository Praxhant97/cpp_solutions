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

bool isPerfectSquare(long long x) {
    long long s = sqrt(x);
    return s * s == x;
}
 
void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long totalSum = (1LL * n * (n + 1)) / 2;
        if (isPerfectSquare(totalSum)) {
            cout << "-1\n";
            continue;
        }
        set<int, greater<int>> available;
        for (int i = 1; i <= n; i++) {
            available.insert(i);
        }
        vector<int> p;
        long long prefixSum = 0;
        while (!available.empty()) {
            for (auto it = available.begin(); it != available.end(); ++it) {
                if (!isPerfectSquare(prefixSum + *it)) {
                    prefixSum += *it;
                    p.push_back(*it);
                    available.erase(it);
                    break;
                }
            }
        }
        for (int num : p) {
            cout << num << " ";
        }
        cout << "\n";
    }
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t = 1;
    // cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    
    return 0;
}