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
bool canmake(ll target,ll n,ll k, vector<ll> &sum,vector<ll> &extra,vector<ll> &dead){
    ll used=0;
    for (int i=0;i<n;i++){
        if(sum[i]>=target){
            continue;
        }

        if(dead[i]==1){
            return false;
        }
        ll need=target-sum[i];
        need=need+2*extra[i];
        if(used+need>k){
            return false;
        }

        used=used+need;
    }

    return true;
}

void solve() {
    ll n;
    cin>>n;
    ll k;
    cin>>k;
    vector<ll>sum(n);
    vector<ll>extra(n);
    vector<ll>dead(n);
    ll low=LLONG_MAX;
    ll cap=LLONG_MAX/4;
    for(int i=0;i<n;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        sum[i]=a+b+c;
        low=min(low,sum[i]);
        if(a==b && b==c){
            dead[i]=1;
            cap=min(cap,sum[i]);
        }
        extra[i]=0;
        if(a<=b && b<=c){
            extra[i]=min(b-a,c-b)+1;

        }
    }
    ll high;
    high=low+k;
    if(cap<high){
        high=cap;

    }
    high+=1;
    while(high-low>1){
        ll mid=low+(high-low)/2;
        if(canmake(mid,n,k,sum,extra,dead)){
            low=mid;
        }else{
            high=mid;
        }
    }
    cout<<low<<endl;
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