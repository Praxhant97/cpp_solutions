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
    ll a,b;
    cin>>a>>b;
    ll k;
    if(a%2==0 && b%2!=0){
        cout<<"-1"<<endl;
        return;
    }
    else if(a%2==0 && b%2==0){
        k=b/2;
    }
    else if( a%2!=0 && b%2==0 && b%4 !=0){
        cout<<"-1"<<endl;
        return;
    }
    else if(a%2!=0 && b%4==0){
        k=b/2;
    }
    else if(a%2!=0  && b%2!=0){
        k=b;
    }
    ll sum=(a*k)+(b/k);
    cout<<sum<<endl;
    
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