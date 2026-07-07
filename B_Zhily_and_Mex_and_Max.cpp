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
    
    int max_val = -1;
    int max_idx = -1;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > max_val) {
            max_val = a[i];
            max_idx = i;
        }
    }

    vector<int> remaining;
    for (int i = 0; i < n; i++) {
        if (i == max_idx) continue;
        remaining.push_back(a[i]);
    }
    
    sort(remaining.begin(), remaining.end());

    vector<int> distincts;
    vector<int> duplicates;
    
    if (!remaining.empty()) {
        distincts.push_back(remaining[0]);
        for (size_t i = 1; i < remaining.size(); i++) {

            if (remaining[i] == remaining[i - 1]) {
                duplicates.push_back(remaining[i]);
            } else {
                distincts.push_back(remaining[i]);
            }
        }
    }

    vector<int> b;
    b.push_back(max_val); 
    for (int x : distincts) b.push_back(x); 
    for (int x : duplicates) b.push_back(x); 

    long long total_sum = 1LL * n * max_val; 
    
    vector<int> freq(n + 2, 0);
    int current_mex = 0;
    long long mex_sum = 0;
    
    for (int i = 0; i < n; i++) {
        if (b[i] <= n) {
            freq[b[i]]++;
        }
        
        while (freq[current_mex] > 0) {
            current_mex++;
        }
        
        mex_sum += current_mex;
    }
    
    total_sum += mex_sum;
    cout << total_sum << "\n";
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