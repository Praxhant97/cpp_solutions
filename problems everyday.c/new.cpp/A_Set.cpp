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


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        vector<char> v;
        int p = 0;

        for (char c : a) {
            v.push_back(c);
            while (v.size() >= 2 && v[v.size() - 2] != v[v.size() - 1] && p < n - 1) {
                char r = b[p];
                v.pop_back();
                v.pop_back();
                v.push_back(r);
                p++;
            }
        }

        if (p == n - 1 && v.size() == 1) {
            cout << "YES" << std::endl;
        } else {
            cout << "NO" << std::endl;
        }
    }

    return 0;
}
