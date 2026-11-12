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
const int maxn = 2e5;


vector<int> g[maxn];
int depth[maxn], dp[maxn];
long long ans[maxn];





void dfs(int v, int p=-1){
ans[v]=0;
dp[v]=depth[v];
int m1=depth[v],m2=depth[v];
   for (auto u:g[v]) {
        if (u!=p){
            depth[u]=depth[v] + 1;
            dfs(u,v);
            dp[v]=max(dp[v], dp[u]);
            ans[v]+=ans[u];
            if (dp[u]>=m1) {
                m2=m1;
                m1=dp[u];
            }  else if(dp[u]>=m2) {
                m2=dp[u];
            }
        }
    }
    ans[v]+=m2-depth[v]+1;
}



void solve() {
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        int x;
        cin>>x;
        g[x-1].push_back(i);

    }
    dfs(0);
    cout<<ans[0]<<endl;
    for(int i=0;i<n;i++){
        g[i].clear();
    }

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