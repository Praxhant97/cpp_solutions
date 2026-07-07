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
    vector<int>sword(n);
    vector<int>monster(n);
    for(int i=0;i<n;i++){
        cin>>sword[i];
    }
    for(int i=0;i<n;i++){
        cin>>monster[i];
    }
    sort(sword.rbegin(),sword.rend());
    ll h=0,sum=0;
    ll ans=0;
    for(int i=1;i<=n;i++){
        while(h<n && sum+monster[h]<=i){
        sum+=monster[h];
        h++;
        }
        ans=max(ans,sword[i-1]*1ll*h);
    }
    cout<<ans<<endl;

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