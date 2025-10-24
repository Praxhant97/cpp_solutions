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
bool cmp(pair<string,ll>&p1,pair<string,ll>&p2)
{
    if(p1.second>p2.second){
        return true;
        }
    else if(p1.second==p2.second)
    {if(p1.first<p2.first){
        return true;
    }else{
        return false;
    }
    
    }else{ return false;
    }
    
    }
    




void solve() {
    int n;
map<string,vector<ll>>m;
cin>>n;
vector<pair<string,ll>>v1;
for(ll i=0;i<n;i++){
    string name;
    cin>>name;
    ll a,b,c,d;
    cin>>a,b,c,d;
    ll total=a+b+c+d;
    v1.push_back({name,total});
    vector<ll>v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    m[name]=v;
}
sort(v1.begin(),v1.end(),cmp);
for(auto x:v1){
    cout<<x.first<<" "<<x.second<<endl;
    for(auto y:m[x.first]){
        cout<<y<<" ";
    }cout<<endl;
}

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t = 1;
    // cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    
    return 0;
}