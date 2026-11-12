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
    int xc=1;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]){
            xc++;
        }
    }
    
    
    int max_Red=0;
    int maxi=0;
    int mini=INT_MAX;
    for (int i=1;i<n-1;i++) {
        int cb=(s[i-1]!=s[i]);
        cb+=(s[i]!=s[i+1]);
        int ca=(s[i-1]!=s[i+1]);
        
        int red=cb-ca;
        max_Red=max(max_Red,red);
    }

    
    cout<<xc-max_Red<<endl;
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