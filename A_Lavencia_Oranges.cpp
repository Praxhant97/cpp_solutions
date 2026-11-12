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
ll getsum(int k){
    ll total=0;
    for(int s=1;s<=k;s++){
        total+=1ll*s*(k/s);
    }
    return total;
}

void solve() {
    ll n;
    cin>>n;
    ll low=1;
    ll high=n;
    while(low<high){
        ll mid=low+(high-low)/2;
        if(getsum(mid)>=n){
            high=mid;
        }else{
            low=mid+1;
        }
    }
    ll k=low;
    vector<int>count(k+1,0);
    ll remaining=n;
    for(int s=k;s>=1;s--){
        ll take=min(k/s,remaining/s);
        count[s]=take;
        remaining-=take*s;

    }
    vector<int>ans;
    int bag=1;
    for(int s=k;s>=1;s--){
        for(int j=0;j<count[s];j++){
            for(int x=0;x<s;x++){
                ans.push_back(bag);
            }
            bag++;
        }
    }
    cout<<k<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
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