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
        ll w,h,a,b;
        cin>>w>>h>>a>>b;
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
      bool row_valid=(abs(y1-y2)%b==0) && (y1 != y2 || abs(x1-x2) % a==0);
    bool col_valid=(abs(x1-x2)%a==0) && (x1!=x2 ||abs(y1-y2) % b == 0);
    if (row_valid || col_valid) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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