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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>dummy(n,1);
    if(arr==dummy){
        cout<<-1<<endl;
        return;
    }
    if(n<=2){
        int ans=0;
        // for(int i=0;i<n;i++){
        //     ans=max(ans,arr[i]);
        // }
        // cout<<ans<<endl;
        if(n==1){
            cout<<arr[0]<<endl;
            return;
        }else{
            cout<<arr[0]+arr[1]-1<<endl;
            return;
        }
    }
    else{
        int ans=0;
        int sum=0;
        bool flag=false;
        for(int i=1;i<n-1;i++){
            sum+=arr[i];
            if(arr[i]>1){
                flag=true;
            }
        }
        // if((arr[0]==1 && arr[n-1]!=1) || arr[0]!=1 && arr[n-1]==1){
        //     ans=sum
        // }
        if(flag==true){
            ans=sum+=arr[0]+arr[n-1]-1;
        }
        else{
            ans=sum+arr[0]+arr[n-1]-(n-1);
        }
        
        cout<<ans<<endl;
    }
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