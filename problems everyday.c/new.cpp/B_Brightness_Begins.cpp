#include<bits/stdc++.h>
using namespace std;

void solve() {
	long long n; cin >> n;
	long long l = 1, r = 2e18, ans = 0;
	while(l <= r) {
		long long mid = (l + r) / 2;
		long long t = sqrt(mid);
		while(t * t > mid) t--;
		while((t + 1) * (t + 1) <= mid) t++;

		long long cnt = mid - t;
		if(cnt >= n) {
			ans = mid;
			r = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	cout << ans << '\n';
}

int main() {
	int t; cin >> t;
	while(t--) {
		solve();
	}
}
