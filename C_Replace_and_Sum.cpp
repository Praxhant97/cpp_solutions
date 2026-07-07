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
    int n,q;
    cin>>n>>q;
    vector<int> a(n+1);
    vector<int> b(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }

    for(int i=1;i<=n;i++){
        a[i]=max(a[i],b[i]);
       

    }
    for(int i=n-1;i>=1;i--) {
    a[i]=max({a[i],a[i+1]});
    }

   
vector<int>pref(n+1,0);

for(int i=1;i<=n;i++){
    pref[i]=pref[i-1]+a[i];
}
for(int i=0;i<q;i++){
    int l,r;
    cin>>l>>r;
    cout<<pref[r]-pref[l-1]<<" ";
}
cout<<endl;
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