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
    int init1=0;
    int init0=0;
    int count=1;




    // string compressed;
    // compressed.push_back(s[0]);
    // for(int i=1;i<n;i++){
    //     if(s[i]!=compressed.back()){
    //         compressed.push_back(s[i]);
    //     }
    // }

    // cout<<compressed<<endl;

    
    for(int i=0;i<n;i++){
        if(s[i]=='0'){    
            init0++;
        }else{
            init1++;
        }
    }
    int abc=init0-init1;
    if(abs(abc)>2){
        cout<<"-1"<<endl;
        return;
    }
    
    int zero=0;
    int one=0;
    if(s[0]=='0'){
        zero++;
    }else{
        one++;
    }
    // int rem0=0;
    // int rem1=0;
    // for(int i=0;i<compressed.size();i++){
    //     if(compressed[i]=='0'){
    //         rem0++;
    //     }else{
    //         rem1++;
    //     }
    // }
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
             count++;
             if(s[i]=='0'){
                zero++;
             }else{
                one++;
             }
        }
    }
    int xyz=zero-one;
    int ans=n-count+max(0,abs(abc-xyz)-1);
    cout<<ans<<endl;

    

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t = 1;
    cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    
    return 0;
}