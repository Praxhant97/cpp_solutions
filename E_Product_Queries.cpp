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
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>dp(n+1,INT_MAX);
    for(int i=0;i<n;i++){
        dp[arr[i]]=1;
    }
    for(int i=1;i<=n;i++){
        if(dp[i]==INT_MAX){
            continue;
        }
        for(int j=i;j<=n;j+=i){
            if(dp[j/i]!=INT_MAX){
                dp[j]=min(dp[j],dp[i]+dp[j/i]);
            }
           
        }
    }
    for(int i=1;i<=n;i++){
        if(dp[i]==INT_MAX){
            dp[i]=-1;
        }
        cout<<dp[i]<<" ";
    }
    cout<<endl;
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