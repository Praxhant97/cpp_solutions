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
    int n,x,y;
    cin>>n>>x>>y;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int gx=gcd(x,y);
    int a=0;
    bool xyz=true;
    for(int i=0;i<n;i++){
        if(abs(arr[i]-(i+1))%gx!=0){
            xyz=false;
        }
    }
    if(xyz==true){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;

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