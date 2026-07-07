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

void scan(vector<int>& arr, int k) {
    for (int i = 0; i < k; ++i) {
        cin >> arr[i];
    }
}

void solve() {
    int k;
    cin >> k;
    vector<int> arr(k);
    scan(arr, k);
    unordered_map<int, int> hash;
    for (int n : arr) hash[n]++;
    k -= 2;
    for (int i = 1; i <= k; i++) {
        if (i * i == k && hash[i] >= 2) {
            cout << i << " " << i << endl;
            return;
        }
        if (k % i == 0 && hash[i] && hash[k / i]) {
            cout << i << " " << k / i << endl;
            return;
        }
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
