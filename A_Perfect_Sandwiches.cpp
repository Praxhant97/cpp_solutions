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
    int a;
    cin>>a;
    int b;
    cin>>b;
    if(b>=a){
    cout<<-1<<endl;
    return;
    }
    int ans=min(b,a-b);
    if(ans<1){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }

// }

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