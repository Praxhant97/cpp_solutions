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
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> tochange(k);
    for(int i=0;i<k;i++){
        tochange[i]=arr[i];
    }
    vector<int>comp(n+1);
    for(int i=0;i<n-k+1;i++){
        comp[arr[i]]=1;
    }
    int mex=0;
    for(;comp[mex]==1;mex++);
    if(mex==n-k+1){
        cout<<-1<<endl;
        return;
    }
    int j=0;
    for(int i=1;i<n-k+1;i++){
        if(arr[i]>arr[j]){
            j=i;
        }
    }
    vector<int>pos(n);
    for(int f=0;f<n;f++){
        pos[arr[f]]=f;
    }
    cout<<j+1<<" "<<pos[mex]+1<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t = 1;
    cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    
    return 0;
}