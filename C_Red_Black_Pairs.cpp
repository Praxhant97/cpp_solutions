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

void solve(){
  int n;
  cin >> n;
  vector<string> d(2);
  cin >> d[0] >> d[1];

  vector<int> dp(n + 1, INF);
  dp[0] = 0;
  for (int i = 0; i < n; i++){
    dp[i + 1] = min(dp[i + 1], dp[i] + (d[0][i] != d[1][i]));
    if (i + 1 < n){
      dp[i + 2] = min(dp[i + 2], dp[i] + (d[0][i] != d[0][i + 1]) + (d[1][i] != d[1][i + 1]));
    }
  }

  cout << dp[n] << '\n';
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