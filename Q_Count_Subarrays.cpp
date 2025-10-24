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
    int t;
    while(t--){
ll n;
cin>>n;
vector<ll>v(n);
for(ll i=0;i<n;i++){
cin>>v[i];

}
ll cnt=1;
ll valid=0;
for(ll i=1;i<n;i++){
    if(v[i]>=v[i-1]){
        cnt++;
    }
    else{
        // cout<<cnt<<"="<<endl;
        valid+=(cnt*(cnt+1))/2;
    cnt=1;
    }
}
// cout<<cnt<<"+"<<endl;
valid+=(cnt*(cnt+1))/2;
cout<<valid<< endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t ;
   cin >> t; 

        solve();
    
    return 0;
}