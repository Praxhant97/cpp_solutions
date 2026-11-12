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

    
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int>spf(n+1,0);
    for(int i=2;i<=n;i++){
        if(spf[i]==0){
            for(int j=i; j <= n; j += i){
                if(spf[j]==0){
                    spf[j]=i;
                }
            }
        }
    }
    vector<ll> dp(n+1,0);
    for (int x=k+1;x<=n;x++)
    {
        ll best=1e19;
        int y=x;
        while(y>1){
            int p=spf[y];
            ll current=1+p*dp[x/p];

            if (current<best){
                best=current;
            }
            while(y%p== 0){
                y=y/p;
            }
        }

        dp[x]=best;
    }

    ll answer=0;

    for (int i=0;i<n;i++){
        answer+=dp[a[i]];
    }

    cout << answer <<endl;
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