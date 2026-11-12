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
    int n, q;
    cin >> n >> q;

    string s;
    cin>>s;

    vector<int> pref(n+1,0);

    for (int i=1;i<n;i++) {
        pref[i+1]=pref[i];

        if (s[i]==s[i-1]) {
            pref[i+1]++;
        }
    }

    while (q--){
        int l,r,k;
        cin>>l>>r>> k;

        int bad = pref[r]-pref[l];
        int operations=(bad+1)/2;

        if (operations<=k){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
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