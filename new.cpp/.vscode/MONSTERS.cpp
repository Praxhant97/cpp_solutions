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

void solve()
{
    ll n, k;
    cin >>n >>k;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin>>arr[i];

    vector<pair<ll, ll>> hMap;

    for (int i=0;i<n;i++)
    {
        ll res=arr[i] % k;
        if (res==0)
            res+=k;
        hMap.push_back({-res, i});
    }

    sort(hMap.begin(), hMap.end());
    for (auto ele : hMap)
        cout << ele.second + 1 << " ";

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