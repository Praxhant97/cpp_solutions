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
    string s;
    cin>>s;
    ll xoor=s[0];
    ll annd=s[0];
    for(int i=0;i<n;i++){
        xoor^=s[i];
        annd&=s[i];
    }
      int ans=n;
    int pref1=0;
    if(s[0]=='1'){
        int z=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                z++;
            }
        }
        cout<<z<<endl;
        return;
    }
    ll p=-1;
    ll totalz=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1' && p==-1){
            p=i+1;
        }
        if(s[i]=='0'){
            totalz++;
        }
    }
    if(p==-1){
        cout<<0<<endl;
        return;
    }
  
    int suff0=totalz;
    for(int i=0;i<=n;i++){
        if(i>=p-1){
            ans=min(ans,pref1+suff0);

        }
        if(i<n){
            if(s[i]=='1'){
                pref1++;
            }
            else{
                suff0--;
            }
        }
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