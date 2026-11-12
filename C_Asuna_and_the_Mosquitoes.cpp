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
    ll countOdd=0;
    ll countEven=0;
    ll maxi=0;
    ll maxiInd;
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        // maxi=max(arr[i],maxi);
        
        if(arr[i]%2==0){
            countEven++;
        }else{
            countOdd++;
        }
        if(arr[i]>maxi){
            maxi=arr[i];
            maxiInd=i;
        }
         sum+=arr[i];
    }
    if(countOdd==0 || countEven==0){
        cout<<maxi<<endl;
        return;
    }
    cout<<sum-countOdd+1<<endl;
    // arr.erase(arr.begin()+maxiInd);
    // sort(arr.begin(),arr.end());
    // for(int i=n-2;i>=0;i--){
    //     int x=n;
    //     if(arr[x-2]!=)
    //     if(arr[i]%2!=maxi%2   && arr[i]!=0){

    //         arr[i]--;
    //         maxi++;
            
    //     }
        
    // }

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