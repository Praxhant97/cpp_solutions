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
    vector<int>a(n);
    int count_nonZero=0;
    int s=0;// xorsum
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]!=0){
            count_nonZero++;
        }
        s=s^a[i];
    }
      if(n==1){
        cout<<"0"<<endl;
        return;
    }
    if(s==0){
        cout<<"1"<<endl;
        return;
    }
    ll count=0;
    for(int i=0;i<n;i++){
        if((a[i]^s)<a[i]){
            count++;
        }
    }
    cout<<count<<endl;
    
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