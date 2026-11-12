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
    int count=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        if(s[i]=='#'){
            count++;
        }
        maxi=max(maxi,count);
        if(s[i]=='*'){
            count=0;
        }
    }int ans;
    if(maxi%2==0){
ans=maxi/2;
    }else{
        ans=(maxi/2)+1;
    }
    cout<<ans<<"\n";
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