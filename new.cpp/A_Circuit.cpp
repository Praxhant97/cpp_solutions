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
    int state[2 * n];
    int numOff = 0, numOn = 0;

    for (int i=0;i<2*n;i++) {
        cin >> state[i];
    }

    for (int i = 0; i < 2 * n; i++) {
        if (state[i] == 0) {
            numOff++;
        } else {
            numOn++;
        }
    }

    if (numOff == 0) {
        cout<<"0 0"<<endl;
    } else {
        if (numOff >= numOn) {
            cout<<(numOff % 2)<<" "<<numOn<<endl;
        } else {
            cout<<(numOn % 2)<<" "<<numOff<<endl;
        }
    }
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


