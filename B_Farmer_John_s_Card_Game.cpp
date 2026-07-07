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
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    vector<pair<int, int>> order(n);
        // Store all hands
        vector<vector<int>> cards(n, vector<int>(m));
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> cards[i][j];
            }
   
            sort(cards[i].begin(), cards[i].end());

            order[i] = {cards[i][0], i + 1};
        }
        
        sort(order.begin(), order.end());
        
        bool possible = true;
        vector<int> ans;
        
        for (int i = 0; i < n; ++i) {
  
            int original_idx = order[i].second - 1; 
            ans.push_back(order[i].second);
            
            for (int j = 0; j < m; ++j) {
                if (cards[original_idx][j] != i + j * n) {
                    possible = false;
                    break;
                }
            }
            if (!possible) break;
        }
        
        if (possible) {
            for (int i = 0; i < n; ++i) {
                cout << ans[i];
                
                if (i < n - 1) {
                    cout << " ";
                }
            }
            cout << "\n";
        } else {
            cout << -1 << "\n";
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