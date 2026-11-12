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
struct Casino {
    int l, r, real_val;
};
bool compareCasinos(const Casino& a, const Casino& b) {
    return a.real_val < b.real_val;
}

void solve() {
    int n,k;
    cin >> n >> k;
    pair <int,pair <int,int> > p[n + 1];
    for(int i = 1;i <= n;i++) cin >> p[i].first >> p[i].second.first >> p[i].second.second;
    sort(p + 1,p + n + 1);
    int cur = k;
    for(int i = 1;i <= n;i++) {
      if(p[i].first > cur) break;
      cur = max(cur,p[i].second.second);
    }
    cout << cur << endl;
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