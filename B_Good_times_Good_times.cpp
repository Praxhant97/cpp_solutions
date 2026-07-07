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
bool isygood(ll y){
 bool s[10]={false};
 for (;y>0;y=y/10) {
        int digit=y%10;
        s[digit]=true;  
    }
    int count=0;
    for(int i=0;i<10;i++){
        if(s[i]==true){
            count++;
        }
    }
    if(count<=2){
        return true;
    }else{
        return false;
    }
}
vector<ll> goodYlist;
void precompute() {
    for (ll i = 2; i <= 1000000; i++) {
        if (isygood(i)) {
            goodYlist.pb(i);
        }
    }
}

void solve() {
ll n;
        cin>>n;
        ll y=2;
        for(int i=0;i<goodYlist.size();i++) {
            ll y=goodYlist[i];
            if(isygood(n*y)==true){
                cout<<y<<endl;
                return;
            }
        }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    precompute();
    int t = 1;
    cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    
    return 0;
}