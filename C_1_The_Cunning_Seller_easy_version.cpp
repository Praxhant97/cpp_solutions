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
    vector <long long> cost;
    long long c = 3;
    long long cnt = 1;
    for (int i = 0; i < 21; ++i) {
        cost.push_back(c);
        c = 3 * c + cnt;
        cnt *= 3;
    }
  long long n;
        cin >> n;
        long long min_k = 0;
        long long min_cost = 0;
        int sz = 0;
        while (n) {
            min_k += n % 3;
            min_cost += (n % 3) * cost[sz];
            n /= 3;
            sz++;
        }
        cout << min_cost << '\n';
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