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
    ll n,c;
    cin>>n>>c;
    vector<ll>a(n);
    vector<ll>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    ll ans1=0;
    ll ans2=c;
    bool xyz=false;
    for(int i=0;i<n;i++){
        if(a[i]<b[i]){
            xyz=true;
        }
        ans1+=abs(a[i]-b[i]);
        
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++){
        if(a[i]<b[i]){
            cout<<"-1"<<endl;
            return;
        }
        if(a[i]!=b[i]){
            ans2+=abs(a[i]-b[i]);
        }

        
    }
    if(xyz==true){
        cout<<ans2<<endl;
    }else{
        cout<<min(ans1,ans2)<<endl;
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