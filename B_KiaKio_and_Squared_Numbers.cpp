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
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll ans=0;
    vector<ll>a1;
    vector<ll>a2;

    for(ll i=0;i<n;i++){
        ll curr=arr[i];
        
        for(ll j=0;j<100;j++){
            ll sum=0;
            while(curr>0){
            ll d=curr%10;
            sum+=d*d;
            curr/=10;
            
        }
        curr=sum;
    }
        bool xyz=false;
        for(ll j=0;j<a1.size();j++){
            if(a1[j]==curr){
                a2[j]++;
                xyz=true;
                break;
            }
        }
        if(xyz==false){
            a1.push_back(curr);
            a2.push_back(1);
        }
    }

    for(int i=0;i<a2.size();i++){
        ll count=a2[i];
        ans=ans+count*(count-1)/2;
    }
    cout<<ans<<endl;
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