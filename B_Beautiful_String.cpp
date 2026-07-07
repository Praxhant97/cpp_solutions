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
        if(n>=10000){
            cout<<"1"<<endl;
        }
 
        string s;
        cin >> s;

        vector<int> pos;
        for(int i = 0; i < n; i++) if(s[i] == '0') pos.push_back(i + 1);

        cout << (int)pos.size() << endl;
        for(auto& z : pos) cout << z << ' ';

        cout << endl;
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