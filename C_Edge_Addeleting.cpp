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
constexpr int N = 500005;

int n, m, d[N], ans;
vector<int> to[N];
queue<int> q;

void solve() {
	cin >> n >> m;
	for(int u = 1; u <= n; ++u) {
		d[u] = -1, to[u].clear();
	}
	for(int _ = 1; _ < n; ++_) {
		int u, v; cin >> u >> v;
		to[u].push_back(v);
		to[v].push_back(u);
	}
	d[n] = 0, q.push(n);
	while(q.size()) {
		int u = q.front();
		q.pop();
		if(u == 1) continue;
		for(int v : to[u]) {
			if(d[v] < 0) {
				d[v] = d[u] + 1;
				q.push(v);
			}
		}
	}
	ans = d[1];
	while(m--) {
		int v; cin >> v;
		ans = max(ans, d[v] + 1);
	}
	cout << ans <<endl;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    
    return 0;
}