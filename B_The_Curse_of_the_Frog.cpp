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
    ll n,x;
    cin>>n>>x;
    vector<ll>a(n),b(n),c(n);
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    ll start=0;
    ll mx=-INT_MAX;
    for(int i=0;i<n;i++){
        mx=max(mx,a[i]*b[i]-c[i]);
        start+=a[i]*(b[i]-1);
    }
    x-=start;
    if(x<=0){
        cout<<0<<endl;
        return;
    }
    if(mx<=0){
        cout<<-1<<endl;
        return;
    }
    cout<<(x+mx-1)/mx<<endl;

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