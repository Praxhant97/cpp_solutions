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
    ll sum=0;
    bool one=false;
    int countone=0;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>1){
            sum+=arr[i];
        }
        if(arr[i]==1){
            countone++;
            one=true;
        }
    }
    ll ans=0;
    if(one==false){
        ans=sum;
    }
    else{
        if(arr[n-1]==1){
            ans=sum+1;
        }
        else{
            ans=sum;
        }
    }
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