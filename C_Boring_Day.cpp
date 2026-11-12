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
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll count=0;
    ll sum=0;
    ll left=0;
    for(ll i=0;i<n;i++){
        sum+=arr[i];
        while(left<=i && sum>r){
             sum-=arr[left];
             left++;
        }
        if(sum>=l && sum<=r){
            count++;
            sum=0;
            left=i+1;
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