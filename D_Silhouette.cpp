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
    cin >> n;
    vector<ll> b(n);
    for (int i = 0;i<n; i++) {
        cin >> b[i];
    }
    vector<ll> std = b;
    sort(std.begin(), std.end());
    vector<ll> s;
    vector<ll> cnt;
    for (ll i =0; i<n; i++){
        if (i==0||std[i]!=std[i-1]) {
            s.push_back(std[i]);
            cnt.push_back(1);
        }else{
            cnt.back()++;
        }
    }
    ll m=s.size();

    if(s[0]!=0){
        cout<<-1 <<endl;
        return;
    }

    vector<ll>v(m);

    if(m==1){
        v[0]=1;
    }else{
        for(int i=0;i<m-1;i++){
            ll diff=s[i+1]-s[i];
            if (diff%cnt[i]!=0) {
                cout<<-1<<endl;
                return;
            }
            v[i]=diff/cnt[i];
            if(i>0&& v[i]<=v[i-1]) {
                cout<<-1<<endl;
                return;
            }
        }
        v[m-1]=v[m-2]+1;
    }
    map<ll,ll>abc;
    for(int i=0;i<m;i++) {
        abc[s[i]]=v[i];
    }
    for(int i=0;i<n;i++) {
        cout<<abc[b[i]]<<" ";
    }

    cout<<endl;
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