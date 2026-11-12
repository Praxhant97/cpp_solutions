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
    
    int len=2*n;
    vector<int> a(len+1);
    vector<int> first_pos(n+1,0);
    vector<long long> dp(len+1,0);
    
    for (int i = 1; i <= len; ++i) {
        cin>>a[i];
        int val=a[i];
        dp[i]=dp[i-1]+1;
        
        if(first_pos[val]==0) {
            first_pos[val]=i;
        }else{
            int l=first_pos[val];
            long long L=i-l+1;
            dp[i]=max(dp[i], dp[l-1]+L*L);
        }
    }
    
    cout<<dp[len]<<endl;
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