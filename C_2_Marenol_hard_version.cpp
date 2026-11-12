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
    string a, b;
    cin >> a >> b;
    vector<int> Aeven, Aodd;
    vector<int> Beven, Bodd;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (a[i] == '1') Aeven.push_back(i / 2);
            if (b[i] == '1') Beven.push_back(i / 2);
        } else {
            if (a[i] == '1') Aodd.push_back(i / 2);
            if (b[i] == '1') Bodd.push_back(i / 2);
        }
    }
    if (Aeven.size() != Beven.size() || Aodd.size() != Bodd.size()) {
        cout << -1 << "\n";
        return;
    }

    long long ans = 0;
    for (size_t i = 0; i < Aeven.size(); i++) {
        ans += abs(Aeven[i] - Beven[i]);
    }
    for (size_t i = 0; i < Aodd.size(); i++) {
        ans += abs(Aodd[i] - Bodd[i]);
    }

    cout << ans <<endl;
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