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
    ll counteven=0;
    ll countodd=0;
    vector<ll>evens;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            counteven++;
            evens.push_back(arr[i]);
        }else{
            countodd++;
        }
    }
    if(counteven==0 || countodd==0){
        cout<<0<<endl;
        return;
    }
    // cout<<counteven<<endl;
    sort(arr.begin(),arr.end());
    ll largestOdd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==1){
            largestOdd=max(largestOdd,arr[i]);
        }
    }





    ll curr=largestOdd;
    ll ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            if(arr[i]<largestOdd){
                largestOdd+=arr[i];
            }
            else{
                // ans+=2;
                // largestOdd+=arr[i];
                cout<<evens.size()+1<<endl;
                return;
            }
        }
    }
    cout<<evens.size()<<endl;
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