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
    // int n;
    // cin>>n;;
    // char c;
    // cin>>c;
    // string a;
    // cin>>a;
    // for(int i=0;i<n;i++){
    //     if((a[i]=='0' && a[i+1]=='1')){
    //         cout<<"YES"<<endl;
    //         return;
    //     }
    // }
    // cout<<"NO"<<endl;
     int n;
        cin>>n;
        cout<<"? 1 "<<n<<endl;
        int k;
        cin>>k;
        if(k==-1){
            return;
        }
        if (k==0 || k==n) {
            cout<<"! NO"<<endl;
            return;
        }
        cout<< "? 1 "<<k<<endl;
        int x;
        cin>>x;
        if(x==-1){
            return;
        }
        if (x == k) {
            cout<<"! NO"<<endl;
        } else{
            cout<<"! YES"<<endl;
        }

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