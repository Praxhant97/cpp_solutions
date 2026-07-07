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

int get_mex(int l, int r, const vector<int>& a, int n) {
    if (l<0 || r>= 2*n || a[l]!=a[r]) {
        return 0;
    }
        while (l>=0 && r<2*n && a[l]==a[r]) {
        l--;
        r++;
    }
    l++;
    r--;
    vector<bool>present(n+1,false);
    for (int i=l;i<=r;++i) {
        if (a[i] <= n) {
            present[a[i]] = true;
        }
    }
    int mex = 0;
    while (mex <= n && present[mex]) {
        mex++;
    }
    
    return mex;
}

void solve() {
    int n;
    cin >> n;
    vector<int>a(2*n);
    int p1 =-1,p2=-1;
    for (int i=0; i<2*n;++i) {
        cin>>a[i];
        if(a[i]==0) {
            if(p1==-1)p1=i;
            else p2=i;
        }
    }
    int ans=0;
    ans=max(ans,get_mex(p1,p1,a,n));
    ans=max(ans,get_mex(p2,p2,a,n));
    if((p1+p2)%2==0) {
        ans=max(ans,get_mex((p1+p2) / 2, (p1 + p2) / 2,a,n));
    }else{
        ans=max(ans,get_mex((p1+p2)/2, (p1+p2)/2 + 1,a,n));
    }
    cout<<ans<<endl;
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