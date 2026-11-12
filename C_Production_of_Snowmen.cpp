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
bool good(const vector<int>& x, const vector<int>& y, int n, int k) {
    for (int i = 0; i < n; ++i) {
        if (x[i]<=y[(i + k)%n]) {
            return false;
        }
    }
    // if(x[2]>50){
    //     return false;
    // }
    return true;
}

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    vector<int>c(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    vector<int>dp(n);
    int count=0;
    long long k1=0,k2=0;
    for (int i = 0; i < n; ++i) {
        if (good(b, a, n, i)) {
            k1++;
        }
        if (good(c, b, n, i)) {
            k2++;
        }
    }
    cout << k1*k2*n<<endl;
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