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
    ll n;
    ll k;
    cin>>n>>k;
    vector<int>arr(n+1);
    arr[n]=n-1;
    arr[n-1]=n;
    for(int i=1;i<=n-2;i++){
        if(k%2==1){
            arr[i]=n;
        }
        else{
            arr[i]=n-1;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
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