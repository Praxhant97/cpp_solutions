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
    // int idx=0;
    // vector<int>ans;
    vector<ll>pre(n);
    vector<ll>suff(n+1);
    pre[0]=abs(arr[0]);
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+abs(arr[i]);
    }
    suff[n]=0;
    for(int i=n-1;i>=0;i--){
        suff[i]=suff[i+1]+arr[i];
    }
    ll best = suff[0];
    ll idx = -1;
    for (int i = 1; i < n; i++){
        if (arr[i] > 0){
            ll score = pre[i - 1] + suff[i + 1] - arr[i];
            if (score > best){
                best = score;
                idx = i;
            }
        }
    }

    if (idx == -1){
        cout << "0"<<endl;
        return;
    }

    vector<ll> ans;
    for (int i = idx - 1; i >= 0; i--){
        if (ans.size() & 1)
            arr[i] = -arr[i];
        if (arr[i] > 0)
            ans.push_back(i);
    }
    ans.push_back(idx);

    cout << ans.size() <<endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] + 1<<" ";
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