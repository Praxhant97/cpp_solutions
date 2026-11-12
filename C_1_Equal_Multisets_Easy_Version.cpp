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
    int k;
    cin>>k;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    // reverse(a.begin(),a.end());
    // reverse(b.begin(),b.end());
    // for(int i=0;i<n-k;i++){
    //     a.pop_back();
    //     b.pop_back();

    // }
   for (int i=0;i<n;i++) {
        if (i<n-k||i>=k) {
            if (b[i]!=-1&&b[i]!=a[i]) {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    
    if(n-k<k) {
        set<int>allowed;
        for (int i=n-k;i<k;i++) {
            allowed.insert(a[i]);
        }
        
        for (int i=n-k;i<k;i++) {
            if (b[i]!=-1) {
                if (allowed.find(b[i])==allowed.end()) {
                    cout<<"NO"<<endl;
                    return;
                }
                allowed.erase(b[i]);
            }
        }
    }
    
    cout << "YES"<<endl;
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