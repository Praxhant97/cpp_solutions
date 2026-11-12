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
const int MAX_N = 1e5 + 5;
int n, b[MAX_N], a[MAX_N];

void solve(){
    
    cin >> n;
    for (int i=1;i<n;i++)
        cin>>b[i];
    b[0]=b[n]=0;
    for (int i=1;i<=n;i++)
        a[i]=b[i-1] | b[i];
    bool valid=true;
    for (int i=1;i<n;i++)
        if ((a[i]&a[i+ 1]) != b[i]) {
            valid = false;
            break;
        }
    if (valid) {
        for (int i=1;i<=n;i++)
            cout<<a[i]<< ' ';
        cout <<endl;
    } else
        cout << -1 << endl;
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