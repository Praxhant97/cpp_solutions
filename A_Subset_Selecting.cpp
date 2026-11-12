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
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    vector<ll> freq(n+1,0);

    for (ll i=0;i<n;i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    //  if (freq[0] < k) {
    //     cout << 0 <<endl;
    //     return;
    // }

    ll ans=0;
    ll cnt=0;
    ll smaller=freq[0] - k;
    for (int i=0;i<=n;i++) {
        if (freq[i]==0) {
            break;
        }
        cnt += freq[i];

        if (cnt<k*(i+1)) {
            break;
        }
        ans=i+1;
        // smaller -= (k - 1);
        // smaller += freq[i] - 1;
        // ans++;
    }

    cout<<ans<<endl;
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