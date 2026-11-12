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
    string s;
    cin>>s;
    if(s.size()<=2){
        cout<<1<<endl;
        return;
    }
    int x=0;
    int y=0;
    for(int i=1;i<s.size()-1;i++){
        if(s[i]==s[i-1] && s[i]==s[i+1]){
            x++;
        }
        if(s[i-1]==s[i+1] && s[i]!=s[i-1]){
            y++;
        }
    }
    int ans=0;
    if(x>0){
        ans++;
    }
    if(y>0){
        ans++;
    }
    ans++;
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