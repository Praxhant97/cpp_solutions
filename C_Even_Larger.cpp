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
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
      cin >> i;

    vector<int> b(n + 1);
    long long ans= 0;
    for (int i=0;i<n;i+=2) {
      int mn=a[i];
      if (i>=2)
        mn = min(mn, a[i-1] - b[i-2]);
      if (i+1<n)
        mn = min(mn, a[i+1]);
      b[i]=mn;
      ans+=(a[i]- b[i]);
    }

    cout<<ans <<endl;
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