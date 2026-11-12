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
    vector<ll>arr(n+2);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    ll maxi=0;
    ll mini=LLONG_MAX;
    if(n%2!=0){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=1;i<=n;i++){
        if(i%2==1){
            mini=min(mini,arr[i]);
        }
        else{
            maxi=max(maxi,arr[i]);
        }
    }
    string s;
    if(maxi+2<=mini){
        s="YES";
    }
    else{
         s="NO";
    }
    cout<<s<<endl;
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