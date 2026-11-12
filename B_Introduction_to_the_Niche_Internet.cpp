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
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[n-1]){
            c++;
        }
    }
    if(c>k){
        cout<<"NO"<<endl;
        return;
    }else{
        cout<<"YES"<<endl;
        for(int i=n-k;i<n;i++){
            cout<<arr[i]<<" ";
        }
        for(int i=n-k-1;i>=0;i--){
            cout<<arr[i]<<" ";
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