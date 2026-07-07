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


ll find(char x, string s){
vector<int>pos;
for(int i=0;i<s.size();i++){
    if(s[i]==x){
        pos.push_back(i);
    }
}
if(pos.size()<=1){
    return 0;
}
for(int i=0;i<pos.size();i++){
    pos[i]-=i;
}
ll med=pos.size()/2;
ll total=0;
for(int i=0;i<pos.size();i++){
    total+=abs(pos[i]-pos[med]);
}
return total;

}



void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=LLONG_MAX;
    ans=min(ans,find('a',s));
    ans=min(ans,find('b',s));
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