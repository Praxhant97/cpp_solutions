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
    ll a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int s = 0;
    vector<pair<int, int>> v = {
        {a1, b1}, {a2, b2},
        {a1, b2}, {a2, b1},
        {a2, b1}, {a1, b2},
        {a2, b2}, {a1, b1}
    };

    for (int i=0;i<sz(v);i+=2) {
        ll c =0,cc=0;
        if (v[i].first>v[i].second)
            c++;
        else if (v[i].first<v[i].second)
            cc++;

        if (v[i+1].first>v[i+1].second)
            c++;
        else if(v[i+1].first<v[i +1].second)
            cc++;

        if (c > cc)
            s++;
    }
    cout<<s<< endl;
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

