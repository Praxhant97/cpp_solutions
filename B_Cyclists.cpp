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
    int n,k,p,m;
    cin>>n>>k>>p>>m;
    vector<int>arr(n+2);
    
    arr[n]=1e18;
    arr[n+1]=1e18;
    int count_res=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll wincost =arr[p-1];
    int req=max(0,p-k);
    vector<ll>pre;
    for(int i=0;i<p-1;i++){
        pre.push_back(arr[i]);  
    }
    sort(pre.begin(),pre.end());
    ll playcost=wincost;
    for (int i=0;i<req;i++) {
        playcost+=pre[i];
    }
    if(m<playcost){
        cout<<0<<endl;
        return;
    }
    ll plays=1;
    m-=playcost;
    int req_subsequent = max(0, n - k);
    vector<long long> others;
    for (int i=0; i<n;i++) {
        if (i==p-1) 
        continue; 
        others.push_back(arr[i]);
    }
    sort(others.begin(),others.end());
    long long subsequent_play_cost = wincost;
    for (int i = 0; i < req_subsequent; i++) {
        subsequent_play_cost += others[i];
    }
    plays+=m/subsequent_play_cost;
    
    cout << plays<<endl;
   
}
// int i=0;
// int th=0;
//    while(m>0){
//     if(p>th && p<=i+k){
//         m-=arr[p];
//     }else{
//         int minimum=arr[th];
//        for(int j=th;j<i+k;j++){
//         minimum=min(arr[j],arr[j+1]);
//        }
//       m-=minimum;
//     }
    
//     if(th+k>n){
//         th=(th+k)%n;
//     }
//    }



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