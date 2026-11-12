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
    int maxfreq=0;
    vector<int> freq(101, 0);
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        freq[arr[i]]++;
        maxfreq=max(maxfreq,freq[arr[i]]);
    }
    // sort(arr.rbegin(),arr.rend());
    
    vector<int>ans;
    // ans.push_back(arr[0]);
    int x=arr[0];
    int count=1;
    // int i;
    // for(i=1;i<n;i++){
    //     if(arr[i]==x){
    //         count++;
    //     }else{
    //         break;
    //     }
    // }
    // int count1=1;
    // for(int j=i;j<n-1;j++){
    //     if(arr[i]==arr[i+1]){
    //         count1++;
    //     }else{
    //         count1=1;
    //     }
    //     if(count1<=count){
    //         ans.push_back(arr[i]);
    //     }
        
    // }
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;
    for(int i=1;i<=maxfreq;i++){
        vector<int>curr;
        for(int j=1;j<=100;j++){
            if(freq[j]>=i){
                curr.push_back(j);
            }

        }
        sort(curr.begin(),curr.end());
        for(int j=curr.size()-1;j>=0;j--){
            ans.push_back(curr[j]);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";

    }
    cout<<endl;
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