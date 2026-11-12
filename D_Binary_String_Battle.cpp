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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll count1=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='1'){
            count1++;
        }
    }
    if(count1<=k || n<2*k){
        cout<<"Alice"<<endl;
        return;
    }
    if(count1>k || n>=k*2){
        cout<<"Bob"<<endl;
        return;
    }
   

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