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
    cin>>n;
    vector<ll>arr(n);
    ll count=0;
    ll even=0;
    
    bool oddpresent=false;
    vector<ll>odd;
    for(int i=0; i<n ;i++){
        cin>>arr[i];
        if(arr[i]%2!=0){
            odd.push_back(arr[i]);
            oddpresent=true;
            arr[i]=0;
        }
    }
    sort(odd.begin(),odd.end());
    for(int i=odd.size()/2;i<odd.size();i++){
        count+=odd[i];
    }
    
    for(int i=0;i<n;i++){
        count+=arr[i];
    }
    if(oddpresent){
        cout<<count<<endl;
    }else{
        cout<<"0"<<endl;
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