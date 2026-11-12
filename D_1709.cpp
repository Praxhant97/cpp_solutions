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
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){ 
            cin>>b[i];
        }
        vector<pair<int,int>>ans;
        for(int i=0;i<n;i++) {
            for(int j=1;j<n;j++) {
                if (a[j-1]>a[j]) {
                    swap(a[j-1],a[j]);
                    ans.push_back({1,j});
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++) {
                if(b[j-1]>b[j]) {
                    swap(b[j-1],b[j]);
                    ans.push_back({2,j});
                }
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]>b[i]) {
                ans.push_back({3,i+1});
            }
        }
        cout << ans.size()<<endl;
        for (auto [x, y] :ans) 
            cout<<x<<" "<<y<<endl;
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