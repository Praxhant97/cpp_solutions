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
    int t;
    cin >> t;
    vector<string> res;

    while (t--) {
        int n;
        cin >> n;
        vector<int> notes(n);
        for (int i = 0; i < n; ++i) {
            cin >> notes[i];
        }

        bool perfect = true;
        for (int i = 1; i < n; ++i) {
            int interval = abs(notes[i] - notes[i - 1]);
            if (interval != 5 && interval != 7) {
                perfect = false;
                break;
            }
        }

        res.push_back(perfect ? "YES": "NO");
    }

    for (const string& res: res) {
        cout << res<< endl;
    }

    return 0;
}