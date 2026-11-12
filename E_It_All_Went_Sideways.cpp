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
    ll n;
    cin>>n;
    vector<ll>arr(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    vector<ll>dp(n);
    dp[n-1]=arr[n-1];
    sum-=dp[n-1];





    for(int i=n-2;i>=0;i--){
        dp[i]=min(dp[i+1],arr[i]);
        sum-=dp[i];
    }
    ll maxi=-1;
    ll curr=1;
    for(int i=1;i<n;i++){
        if(dp[i]==dp[i-1]){
            curr++;
        }else{
            maxi=max(maxi,curr);
            curr=1;  
        }
    }
    maxi=max(maxi,curr);
    cout<<sum+maxi-1<<endl;
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