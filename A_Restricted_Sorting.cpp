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
    vector<int>brr=arr;
    vector<int>crr;
    int mn = arr[0];
    int mx = arr[0];
    sort(brr.begin(),brr.end());
    vector<int>dp;
    if(arr==brr){
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        mn=min(mn,arr[i]);
        mx=max(mx,arr[i]);
        // if(arr[i]!=brr[i]){
        //     // crr.push_back(arr[i]);
        //     dp.push_back(arr[i]-brr[i]);
        // }

    }
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        if (arr[i]!=brr[i]) {
            int LD=arr[i]-mn;
            int RD=mx-arr[i];
            int farthest=max(LD,RD);
            ans=min(ans,farthest);
        }
    }
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