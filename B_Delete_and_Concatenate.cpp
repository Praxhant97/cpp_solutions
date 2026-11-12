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
    ll n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
   
    ll score=0;
    sort(arr.begin(),arr.end());
    ll l=0;
    ll r=n-1;
    while(l<=r){
        if(l==r){
            score+=arr[r]-k;
            break;
        }
        if(arr[l]<k && arr[r]>=k){
            score+=arr[r]-k;
            l++;
            r--;
        }
        else if(arr[l]<k && arr[r]<k){
            score+=arr[r]-k;
            l++;
            r--;
        }else if(arr[l]>=k && arr[r]>=k){
            score+=arr[l]+arr[r]-2*k;
            l++;
            r--;
        }
    }
    cout<<score<<endl;
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