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
 if(n%2!=0 && s[0]=='b'){
    cout<<"NO"<<endl;
    return;


 }
 int st;
 if(n%2!=0){
    st=1;
 }else{
    st=0;
 }
 for(int i=st;i<n-1;i+=2){
    if(s[i]==s[i+1] && s[i]!='?' && s[i+1]!='?'){
        cout<<"NO"<<endl;
        return;
    }
 }
 cout<<"YES"<<endl;

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