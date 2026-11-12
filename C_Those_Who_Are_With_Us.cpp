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
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> a(n, vector<int>(m));
    int max_val = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] > max_val) {
                max_val = a[i][j];
            }
        }
    }
    
    vector<int> row_cnt(n, 0);
    vector<int> col_cnt(m, 0);
    int K = 0;
    int r0 = -1, c0 = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == max_val) {
                row_cnt[i]++;
                col_cnt[j]++;
                K++;
                if (r0 == -1) { 
                    r0 = i;
                    c0 = j;
                }
            }
        }
    }
    
    bool possible = false;
    for (int c = 0; c < m; c++) {
        int covered = row_cnt[r0] + col_cnt[c] - (a[r0][c] == max_val ? 1 : 0);
        if (covered == K) {
            possible = true;
            break;
        }
    }
    if (!possible) {
        for (int r = 0; r < n; r++) {
            int covered = row_cnt[r] + col_cnt[c0] - (a[r][c0] == max_val ? 1 : 0);
            if (covered == K) {
                possible = true;
                break;
            }
        }
    }
    if (possible) {
        cout << max_val - 1 << "\n";
    } else {
        cout << max_val << "\n";
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