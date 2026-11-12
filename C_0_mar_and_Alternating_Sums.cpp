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
ll power(ll base, ll exp) {
    ll res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1){
            res=(res*base) % MOD;
        }
        base = (base * base)%MOD;
        exp /= 2;
    }
    return res;
}

void solve() {
    int n;
    cin>>n;
    vector<int>vals;
    vector<int>freq;
    ll negcount=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==-1){
            negcount++;
        }
        else{
            if( vals.empty() || vals.back()!=x){
                vals.push_back(x);
                freq.push_back(1);
            }else{
                freq.back()++;
            }
        }

    }
    ll W0=1;
    for(int f=0;f<freq.size();f++){
        W0=(W0*power(2,freq[f]-1))% MOD;;
    }
    ll P=0;
    ll unique=vals.size();
    for(int i=1;i<unique;i++){
        if(vals[i]-vals[i-1]==1){
            P++;
        }
    }
    ll E = (negcount > 0) ? power(2, negcount - 1) : 1; 
    ll O = (negcount> 0) ? power(2,negcount- 1) : 0; 
    
    ll ans = (E * W0) % MOD;
    ll odd_contrib = (O * W0) % MOD;
    odd_contrib = (odd_contrib * P) % MOD;
    
    ans = (ans + odd_contrib) % MOD;
    cout << ans << "\n";
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