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
ll hcf(ll a,ll b){
    while(b!=0){
        ll tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}
ll lcm(int a,int b){
    return a*b/(gcd(a,b));
}


void solve() {
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll z=1;
    for(int i=0;i<n;i++){
        z=lcm(z,arr[i]);
    }
    ll suma=0;
    for(int i=0;i<n;i++){
        suma+=z/arr[i];
    }
    if(suma<z){
        for(int i=0;i<n;i++){
            cout<<z/arr[i]<<" ";
        }
        cout<<endl;
    }else{
        cout<<-1<<endl;
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t=1 ;
    cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    
    return 0;
}