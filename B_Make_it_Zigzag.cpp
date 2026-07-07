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
    vector<ll>arr(n+2);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr[n]=0;
    arr[n+1]=0;
    ll curr_max=0;
    for(int i=0;i<n;i++){
        curr_max=max(curr_max,arr[i]);
        if(i%2==1){
            arr[i]=curr_max;
        }
    }
    ll count=0;
    for(int i=0;i<n;i+=2){
        ll required_max = 2e9;
        if(i>0) {
            required_max=min(required_max, arr[i-1]-1);

        }
        if(i+1<n) {
            required_max=min(required_max,arr[i+1]-1);
        }
        if(arr[i]>required_max) {
            count+=arr[i]-required_max;
            arr[i]=required_max; 
        }
    }
    cout<<count<<endl;
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