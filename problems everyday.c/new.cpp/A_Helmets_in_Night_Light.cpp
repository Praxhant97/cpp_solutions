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
    long long n,p;cin>>n>>p;
		vector<pair<ll,ll>>a(n);
		for(int i=0;i<n;i++){
			cin>>a[i].second;
		}
		for(int i=0;i<n;i++){
			cin>>a[i].first;
		}
		sort(a.begin(),a.end());
		ll cnt=1;
		ll ans=p;
		for(int i=0;i<n and a[i].first<p;i++){
			ans+=1ll*a[i].first*min(a[i].second,n-cnt);
			cnt+=min(n-cnt,a[i].second);
		}
		ans+=1ll*(n-cnt)*p;
		cout<<ans<<endl;

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