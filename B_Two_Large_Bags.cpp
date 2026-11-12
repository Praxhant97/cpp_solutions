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
    int s=0;
    vector<int>dp(s,0);
    sort(arr.begin(),arr.end());
    dp.push_back(arr[0]);
    int mx=0;
    for(int i=0;i<n;i=i+2){
        if(max(mx,arr[i])!=max(mx,arr[i+1])){
            cout<<"NO"<<endl;
            return;
        }mx=max(mx,arr[i])+1;
    }
    cout<<"YES"<<endl;
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