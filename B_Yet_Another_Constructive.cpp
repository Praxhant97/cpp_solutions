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
    int n,m,k;
    cin>>n>>k>>m;
    if(k>m){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
   vector<int>ans(n);
   int l=0;
   int r=l+k-1;
   for(int i=0;i<n;i++){
    if(i%k==0){
        cout<<m-k+1<<' ';
    }
    else{
        cout<<1<<' ';
    }
   }
   cout<<endl;

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