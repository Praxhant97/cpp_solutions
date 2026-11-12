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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        if(arr[0]==0){
            cout<<1<<endl;
            return;
        }
    }

    // sort(arr.begin(),arr.end());
    ll sum=0;
    ll count=0;
    ll mx=0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        mx = max(mx, arr[i]);

        if (2 * mx == sum) {
            count++;
        }
    }
    cout<<count<<endl;
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