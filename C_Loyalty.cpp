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
    int n,x;
    cin>>n>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>copy=arr;
    sort(copy.begin(),copy.end());
    ll sum=0;
    ll points=0;
    vector<int> res;
    ll left=0;
    ll right=n-1;
    while(left<=right){
        if(copy[right]+sum>=x){
            points+=copy[right];
            sum=(sum+copy[right])%x;
            res.push_back(copy[right]);
            right--;
        }
        else{
            sum+=copy[left];
            res.push_back(copy[left]);
            left++;
        }
    }





    // for(int i=n-1;i>=0;i--){
    //     if(copy[i]+sum>=x){
    //         points+=copy[i];
    //         sum=(sum+copy[i])%x;
    //         res.push_back(copy[i]);
    //     }
    //     else if((copy[n-i-1]+sum<x)&&(copy[i]+sum<x)){
    //         sum+=copy[n-i-1];
    //         res.push_back(copy[n-i-1]);
    //         copy.erase(copy.begin()+n-i-1);
    //     }
        
        
    // }

        cout<<points<<endl;
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
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