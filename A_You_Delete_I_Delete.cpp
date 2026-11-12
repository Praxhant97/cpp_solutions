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

void solve(){
    string s;
    cin>>s;
    int n=s.size();
    string ans="";
    for(int i=0;i<n;i++){
        if(s[i]!='0'){
            continue;
        }
        string t=s.substr(0,i);
        t=t+s.substr(i+1);
        string bob="";
        for(int j=0;j<t.size();j++){
            if(t[j]!='1'){
                continue;
            }
            string xyz=t.substr(0,j);
            xyz=xyz+t.substr(j+1);
            if(bob==""|| xyz<bob){
                bob=xyz;
            }
        }
        if(ans==""|| bob>ans){
            ans=bob;
        }
    }
    cout<<ans<<endl;
    // bool a=false;
    // bool b=false;
    // for(int i=0;i<s.size();i++){
    //     if(s[i]=='0' && a==false ){
    //         s.erase(s.begin()+i);
    //         a=true;
    //     }
    //     if(s[i]=='1' && b==false){
    //         s.erase(s.begin()+i);
    //         b=true;
    //     }
    //     if(a==true && b==true){
    //         break;
    //     }
    // }
    // cout<<s<<endl;
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