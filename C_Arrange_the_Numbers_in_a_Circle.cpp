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
    ll k = 0;     
    ll block_cards = 0; 
    ll capacity = 0; 
    ll avail = 0;
    // int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // sum+=arr[i];
        if(arr[i]>=2){
            k++;
            block_cards+=arr[i];
            capacity+=(arr[i]-2)/2;
        }else{
            avail++;
        }
        
    }

    // vector<int>brr;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<arr[i];j++){
    //         brr.push_back(i+1);
    //     }
    // }
     ll ans=0;
    if(k==0){
        cout<<0<<endl;
    }
   
    else if(k==1){
        ll x=block_cards/2;
        ans=block_cards;
        ans+=min(avail,x);
        if(ans<3){
            ans=0;
        }
        cout<<ans<<endl;
        return;
    }
    else{
        ans=block_cards;
        ans+=min(avail,capacity);
        cout<<ans<<endl;
        return; 
    }
    // vector<int>ct1;
    // vector<int>ctnot1;
    // ll sum=0;
    // bool xyz=false;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==1){
    //         ct1.push_back(arr[i]);
    //     }else{
    //         if(arr[i]%2==1){
    //             xyz=true;
    //         }
    //         ctnot1.push_back(arr[i]-arr[i]%2);
    //         ct1.push_back(arr[i]%2);
    //     }
    //     sum+=ctnot1.back();
    // }
    // ll ans=0;
    // while(sum>=0){
    //     int i=0;
    //     ans+=2;
    //     if(!ct1.empty()){
    //         ans+=1;
    //         ct1.pop_back();
    //     }
    //     sum-=2;

    // }
    // if(xyz==true){
    //     ans+=1;
    // }
    // cout<<ans<<endl;
    
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