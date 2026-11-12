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
   string n;
        int j, k;
        cin >> n >> j >> k;
        vector<string> perms;
        do {
            perms.push_back(n);
        } while (next_permutation(n.begin(), n.end()));
        string code_j = perms[j - 1];
        string code_k = perms[k - 1];
        int a_count = 0;
        for (size_t i = 0; i < code_j.length(); ++i) {
            if (code_j[i] == code_k[i]) {
                a_count++;
            }
        }
        int b_count = code_j.length() - a_count;
        cout << a_count << "A" << b_count << "B\n";
    
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