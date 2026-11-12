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
    int k;
    cin>>k;
    vector<int>arr(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
     int cur=arr[k];
    int dist=arr[k];
    sort(arr.begin()+1,arr.end());
   
    bool xyz=true;
    for(int i=1;i<=n;i++){
        if(arr[i]<cur){
            continue;
        }
        if(arr[i]- cur > dist) {
        xyz = false;
      }
      cur=arr[];
    }
    if(xyz==true){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
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