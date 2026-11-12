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
    int n,k;
    cin>>n>>k;
    if(k<n || k>2*n-1){
        cout<<"-1"<<endl;
        return;
    }
    vector<vector<int>>arr(n+1,vector<int>(n+1));
    int val=n+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
            arr[i][j]=i;
            continue;
            }
            arr[i][j]=val;
            val++;
        }
    }
    int shift=k-n;
    int r=2;
    while(shift--){
        swap(arr[r][1], arr[r][r]);
        r++;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
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