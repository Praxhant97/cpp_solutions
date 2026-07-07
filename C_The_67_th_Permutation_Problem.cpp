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
    int n;
    cin>>n;
    int r=3*n;
    vector<int>a(3*n);
    for(int i=0;i<3*n;i++){
        a[i]=r;
        r--;
    }
    int x=3*n;
    int l=1;
    vector<int>ans(3*n);
    for(int i=0;i<3*n;i=i+3){
        ans[i]=l;
        ans[i+1]=x-1;
        ans[i+2]=x;
        l++;
        x=x-2;
    }
    for(int i=0;i<3*n;i++){
        cout<<ans[i]<<" ";
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