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
    s='1'+s+'1';
  
    int ans=0;
     
    for (int i=1,l=0;i<=n;i++) {
        if (s[i]=='0') {
            if (s[i-1]=='1') {
                l=i;
            }
            if (s[i+1]=='1') {
                int c=(l==1)+(i== n);
                ans +=(i -l+1 +c)/3;
            }
        } else {
            ans++;
        }
    }

    // if(n<=3){
    //      if(s[0]==1 && n=3){
    //         cout<<"2"<<endl;
    //     }
    //     if(s[0]==0){
    //         cout<<"1"<<endl;
    //         return;
    //     }
    // }
    // for(int i=2;i<n-2;i++){
    //     if(s[i]==1){
    //         j=i-3;
    //         if(s[j]==0 && s[j+1]!=1 && s[j-1]!=1){
    //             s[j]=1;
    //         }
    //         j=i+3;
    //         if(s[j]==0 && s[j+1]!=1 && s[j-1]!=1){
    //             s[j]=1;
    //         }
    //     }
    // }int sum=0;
    // for(int i=0;i<n;i++){
    //     if(s[i]=='1'){
    //         sum+=1;
    //     }
    // }
    cout<<ans<<endl;
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