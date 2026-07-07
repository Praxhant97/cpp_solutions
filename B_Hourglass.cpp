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
    int s,k,m;
    cin>>s>>k>>m;
    int x=s,y=s-x;
   ll flips=m/k;
   ll rem=m%k;
   ll top=0;
   if(k>=s){
    top=s;
   }
   else{
    if(flips%2==0){
        top=s;
    }
    else{
        top=k;
    }
   }
   ll res=0;
   ll ans=max(res,top-rem);
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