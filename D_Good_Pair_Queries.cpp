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
    string s,t;
    cin>>s>>t;
    vector<vector<ll>> pr(n+1,vector<ll>(4,0));
    for(int i=0;i<n;i++){
        pr[i+1]=pr[i];
        ll ind;
        if(s[i]=='0' && t[i]=='0'){
            pr[i+1][0]++;
        }
        if(s[i]=='0' && t[i]=='1'){
            pr[i+1][1]++;
        }
        if(s[i]=='1' && t[i]=='0'){
            pr[i+1][2]++;
        }
        if(s[i]=='1' && t[i]=='1'){
            pr[i+1][3]++;
        }
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        int c00=pr[r][0]-pr[l-1][0];
        int c01=pr[r][1]-pr[l-1][1];
        int c10=pr[r][2]-pr[l-1][2];
        int c11=pr[r][3]-pr[l-1][3];
        int remain=abs(c01-c10);
        if(c00+c11>= remain){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
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