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
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0){
            count++;
        }

    }
    if(arr[0]==0 && arr[n-1]==0){
        cout<<0<<endl;
        return;
    }
    if(count<2){
        cout<<"-1"<<endl;
        return;
    }
    int c=0;
    if(arr[0]==1){
        c++;
    }
    if(arr[n-1]==1){
        c++;
    }
    cout<<c<<endl;


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