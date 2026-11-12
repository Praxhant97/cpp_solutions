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
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    vector<int> dx={-1,1,0,0};
    vector<int> dy={0,0,-1,1};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int maxi=0;
            for(int k=0;k<4;k++){
                int ni=i+dx[k];
                int nj=j+dy[k];
                if(ni>=0 && ni<n && nj>=0 && nj<m){
                    maxi=max(maxi,arr[ni][nj]);
                }
            }
            if(arr[i][j]>maxi){
                arr[i][j]=maxi;
            }

        }

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
            if(j+1<m){
                cout<<" ";
            }
        }
        cout<<endl;
        
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