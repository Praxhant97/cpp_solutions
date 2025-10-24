#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	cout << (s[0] == s[n - 1] ? "NO" : "YES") << '\n';
}

int main() {

	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
}
