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
    int a,b,c;
    int ans=0;
    vector<int>arr(3);
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr.begin(),arr.end());
    if(arr[0]==arr[1] || arr[1]==arr[2] || arr[0]==arr[2]){
        cout<<'0'<<endl;
        return;
    }
     ans=min((arr[1]-arr[0]),(arr[2]-arr[1]));
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