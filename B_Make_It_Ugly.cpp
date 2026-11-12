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
    int x=arr[0];
    int ans=n;
    int prev=-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=x){
            if(prev!=-1){
                ans=min(ans,i-prev-1);
            }else{
                ans=min(ans,i);
            }
            prev=i;
        }
    }
    if(prev==-1){
        cout<<-1<<endl;
        return;
    }
    ans=min(ans,n-prev-1);
    cout<<ans<<endl;
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