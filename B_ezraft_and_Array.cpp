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
    vector<ll>arr;
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    if(n==2){
        cout<<"-1"<<endl;
        return;
    }
    ll x=3;
    for(ll i=0;i<n-2;i++){
        arr.push_back(x);
        x*=2;
    }
    ll l=arr.size();
    vector<ll>brr(l);
    for(ll i=l-1;i>=0;i--){
        brr[l-i-1]=arr[i];
    }
    brr.push_back(2);
    brr.push_back(1);
    for(ll i=0;i<n;i++){
        cout<<brr[i];
        if(i<n-1){
            cout<<" ";
        }
    }
    cout<<endl;

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